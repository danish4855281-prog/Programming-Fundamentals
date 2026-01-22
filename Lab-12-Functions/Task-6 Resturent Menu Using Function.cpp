#include <iostream>
using namespace std;

void displayMenu() {
    cout << "\n\t<--- Restaurant Menu --->\n\n";
    cout << "1. Burger     - Rs. 250\n";
    cout << "2. Pizza      - Rs. 500\n";
    cout << "3. Fries      - Rs. 150\n";
    cout << "4. Biryani    - Rs. 300\n";
    cout << "5. Cold Drink - Rs. 100\n";
    cout << "6. Exit\n";
}

	int calculateCost(int price, int quantity) {
    return price * quantity;
}

	double calculateFinalBill(int total) {
    double tax = total * 0.10;
    return total + tax;
}

int main() {
    int choice, quantity;
    int totalBill = 0;

    while (true) {
        displayMenu();
        cout << "Select item (1 - 6): ";
        cin >> choice;

        if (choice == 6) break;

        cout << "Enter quantity : ";
        cin >> quantity;

        int price = 0;

        switch (choice) {
            case 1: price = 250;
			 break;
            case 2: price = 500;
			 break;
            case 3: price = 150;
			 break;
            case 4: price = 300;
			 break;
            case 5: price = 100;
			 break;
            default:
                cout << "Invalid choice!\n";
        }

        int cost = calculateCost(price, quantity);
        totalBill += cost;
        cout << "\n\tItem total: Rs. " << cost << endl;
    }

    cout << "\nTotal before tax: Rs. " << totalBill << endl;
    
    double finalAmount = calculateFinalBill(totalBill);
    
    cout << "\n\tFinal bill with 10% tax: Rs. " << finalAmount << endl;

    return 0;
}
