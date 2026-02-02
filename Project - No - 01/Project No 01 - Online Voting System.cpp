#include <iostream>
#include <string>
using namespace std;

int main() {

    // ===== DATA =====
    string candidateName[3];
    int votes[3] = {0};
    int candidateCount = 0;

    string voterUsername[6];
    string voterPassword[6];
    int voterAge[6];
    bool hasVoted[6] = {false};
    int voterCount = 0;

    int mainChoice;

    do {
        cout << "\n========== ONLINE VOTING SYSTEM ==========\n\n";
        cout << "1. Admin\n";
        cout << "2. New User (Register)\n";
        cout << "3. Login\n";
        cout << "4. Results\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";

        while (!(cin >> mainChoice)) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input! Enter number: ";
        }

        switch (mainChoice) {

        // ================= ADMIN =================
        case 1: {
            int adminChoice;
            do {
                cout << "\n===== ADMIN MENU =====\n\n";
                cout << "1. Add Candidate\n";
                cout << "2. Remove Candidate\n";
                cout << "3. Save & Back\n";
                cout << "Enter choice: ";

                while (!(cin >> adminChoice)) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Invalid input! Enter number: ";
                }

                switch (adminChoice) {

                case 1:
                    if (candidateCount < 3) {
                        cin.ignore();
                        bool valid;
                        do {
                            valid = true;
                            cout << "Enter Candidate Name: ";
                            getline(cin, candidateName[candidateCount]);

                            if (candidateName[candidateCount].length() == 0)
                                valid = false;

                            for (int i = 0; i < candidateName[candidateCount].length(); i++) {
                                if (candidateName[candidateCount][i] >= '0' &&
                                    candidateName[candidateCount][i] <= '9') {
                                    valid = false;
                                    break;
                                }
                            }

                            if (!valid)
                                cout << "Invalid name! Numbers not allowed.\n";

                        } while (!valid);

                        candidateCount++;
                        cout << "Candidate Added Successfully!\n";
                    } else {
                        cout << "Candidate limit reached!\n";
                    }
                    break;

                case 2: {
                    if (candidateCount == 0) {
                        cout << "No candidates to remove!\n";
                        break;
                    }

                    int r;
                    cout << "Enter candidate number to remove: ";
                    while (!(cin >> r)) {
                        cin.clear();
                        cin.ignore(1000, '\n');
                        cout << "Invalid input! Enter number: ";
                    }

                    if (r < 1 || r > candidateCount) {
                        cout << "Invalid candidate number!\n";
                        break;
                    }

                    for (int i = r - 1; i < candidateCount - 1; i++) {
                        candidateName[i] = candidateName[i + 1];
                        votes[i] = votes[i + 1];
                    }
                    candidateCount--;
                    cout << "Candidate Removed Successfully!\n";
                    break;
                }

                case 3:
                    cout << "\n\tSaved & Back!\n";
                    break;

                default:
                    cout << "Invalid choice!\n";
                }

            } while (adminChoice != 3);
            break;
        }

        // ================= REGISTER =================
        case 2:
            cout << "\n===== REGISTER =====\n\n";

            if (voterCount < 6) {
                cin.ignore();
                bool validUser;

                do {
                    validUser = true;
                    cout << "\tCreate Username: ";
                    getline(cin, voterUsername[voterCount]);

                    if (voterUsername[voterCount].length() == 0)
                        validUser = false;

                    for (int i = 0; i < voterUsername[voterCount].length(); i++) {
                        if (voterUsername[voterCount][i] >= '0' &&
                            voterUsername[voterCount][i] <= '9') {
                            validUser = false;
                            break;
                        }
                    }

                    if (!validUser)
                        cout << "Invalid username! Numbers not allowed.\n";

                } while (!validUser);

                cout << "Enter Age: ";
                while (!(cin >> voterAge[voterCount]) || voterAge[voterCount] <= 0) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Invalid age! Enter again: ";
                }

                if (voterAge[voterCount] < 18) {
                    cout << "\n\tUnder 18! Not eligible.\n";
                    break;
                }

                cin.ignore();
                cout << "Create Password: ";
                getline(cin, voterPassword[voterCount]);

                voterCount++;
                cout << "Registration Successful!\n";
            } else {
                cout << "Voter limit reached!\n";
            }
            break;

        // ================= LOGIN =================
        case 3: {
            cout << "\n===== LOGIN =====\n\n";
            string u, p;
            cin.ignore();
            cout << "Enter Username: ";
            getline(cin, u);
            cout << "Enter Password: ";
            getline(cin, p);

            int index = -1;
            for (int i = 0; i < voterCount; i++) {
                if (voterUsername[i] == u && voterPassword[i] == p) {
                    index = i;
                    break;
                }
            }

            if (index == -1) {
                cout << "Invalid Username or Password!\n";
                break;
            }

            int loginChoice;
            do {
                cout << "\n--- LOGIN MENU ---\n\n";
                cout << "1. Cast Vote\n";
                cout << "2. Logout\n";
                cout << "Enter choice: ";

                while (!(cin >> loginChoice)) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Invalid input! Enter number: ";
                }

                switch (loginChoice) {

                case 1:
                    if (hasVoted[index]) {
                        cout << "You already voted!\n";
                        break;
                    }

                    if (candidateCount == 0) {
                        cout << "No candidates available!\n";
                        break;
                    }

                    cout << "\nCandidates List:\n";
                    for (int i = 0; i < candidateCount; i++)
                        cout << i + 1 << ". " << candidateName[i] << endl;

                    int c;
                    cout << "Select candidate: ";
                    while (!(cin >> c)) {
                        cin.clear();
                        cin.ignore(1000, '\n');
                        cout << "Invalid input! Enter number: ";
                    }

                    if (c < 1 || c > candidateCount) {
                        cout << "Invalid candidate selection!\n";
                        break;
                    }

                    votes[c - 1]++;
                    hasVoted[index] = true;
                    cout << "Vote Casted Successfully!\n";
                    break;

                case 2:
                    cout << "Logged Out!\n";
                    break;

                default:
                    cout << "Invalid choice!\n";
                }

            } while (loginChoice != 2);
            break;
        }

        // ================= RESULTS =================
        case 4: {
            cout << "\n===== RESULTS =====\n\n";

            int totalVotes = 0;
            int maxVotes = 0;
            int winner = 0;

            for (int i = 0; i < candidateCount; i++) {
                cout << candidateName[i] << " : " << votes[i] << " votes\n";
                totalVotes += votes[i];

                if (votes[i] > maxVotes) {
                    maxVotes = votes[i];
                    winner = i;
                }
            }

            cout << "\nTotal Candidates: " << candidateCount;
            cout << "\nTotal Voters: " << voterCount;
            cout << "\nVotes Casted: " << totalVotes;
            cout << "\nRemaining Voters: " << voterCount - totalVotes;

            if (candidateCount > 0)
                cout << "\nWinner: " << candidateName[winner] << endl;

            break;
        }

        case 5:
            cout << "\nProgram Exit...\n";
            break;

        default:
            cout << "Invalid Main Menu Choice!\n";
        }

    } while (mainChoice != 5);

    return 0;
}

