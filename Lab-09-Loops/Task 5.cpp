#include <iostream>
#include <windows.h>
using namespace std;
int main (){
	
	int defaultBalance = 1000;
	double amount;
	int choice;
	    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
		cout<<"\n\t<----------Simple Banking System------------>\n";
		
		
	while (1){        //Use while loop
	
	    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout<<"\n1. Deposite Money\n";
		cout<<"2. Withdraw Money\n";
		cout<<"3. Check Balance\n";
		cout<<"4. Exit\n";
		cout<<"Choose option from (1 - 4): ";
		cin>>choice;
	
		
		switch (choice){            // for deposite money ! use switch
			case 1:
				cout<<"\nEnter amount to deposite : ";
				cin>>amount;
				if (amount>0){
				defaultBalance = defaultBalance+amount;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
				cout<<"\n\t*** Deposite Successfully! ***"<<endl;
				
				cout<<"\nYour current balance is : "<<defaultBalance<<endl;
				}
				else{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
					cout<<"\nInvalid! Amount can't be nagetive\n"<<endl;
				}
				break;
			case 2:						// for withdraw amount 
			
				cout<<"Enter amount you want to withdraw : ";
				cin>>amount;
				if (amount<defaultBalance){
					defaultBalance = defaultBalance - amount;
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
					cout<<"Your remaning balance is: "<<defaultBalance<<endl;
				}
				
				else{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
					cout<<"\nInsufficient balance!\n"<<endl;
				
				}
				break;
			case 3:					// for check balance
			
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
				cout<<"\nYour current account balance is : "<<defaultBalance<<endl;
				break;
			case 4:
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
				cout<<"\n\t=== Thank you for using our Service. === \n"<<endl;
				return 0;
					
			default:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);	
			    cout<<"\nError! please choose the correct one : \n";
			    break;  	
		}	
}

              

	return 0;
}
