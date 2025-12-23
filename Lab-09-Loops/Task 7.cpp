#include<iostream>
#include <windows.h>
using namespace std;
int main (){
	
	int main_choice, sub_choice;
	int again_main;
	double quantity, bill = 0;
	int again_sub1 = 0, again_sub2 = 0, again_sub3 = 0;
	
	    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
		cout<<"\n\t\t============ RESTAURENT MENU ============\n\n";
		
		do {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			cout<<" 1. Breakfast\n";
			cout<<" 2. Lunch\n";
			cout<<" 3. Dinner\n";
			cout<<" 4. Exit\n";
			cout<<"Enter your choice : ";
			cin>>main_choice;
			
		switch (main_choice){			// breakfast	
			case 1:				
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
				cout<<"\n\t\t<------------Breakfast------------>\n\n";
			
			do {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				cout<<"1. Anda Paratha (RS.40)\n";
				cout<<"2. Nan Channy (RS.60)\n";
				cout<<"3. Siri Paye (RS.150)\n";
				cout<<"4. Tea (RS.15)\n";
				
				cout<<"Enter Item Number : ";
				cin>>sub_choice;
				
				cout<<"Enter quantity : ";
				cin>>quantity;
				
			switch (sub_choice){
				case 1:
					bill =(bill + 40 * quantity);
					break;
				case 2:
					bill = (bill + 60 * quantity);
					break;
				case 3:
					bill = (bill + 150 * quantity);
					break;
				case 4:
					bill = (bill + 15 * quantity);
					break;
				default:
					cout<<"Invalid Item you entered!\n";
			}
			cout<<"Do you want to order more from breakfast (1 = Yes , 0 = No) : ";
			cin>>again_sub1;
			
				
			}
			while (again_sub1 == 1);
			break;
			
		case 2:						// Lunch

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
			cout<<"\n\t\t<------------Lunch------------>\n\n";
				
			do{
					
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				cout<<"1. Chicken Karahi (RS. 1050/KG)\n";
				cout<<"2. Mutton Karahi (RS. 1800/KG)\n";
				cout<<"3. Egg Fried Rice (RS.450/Plate)\n";
				cout<<"4. BBQ (RS. 1050/dozen)\n";
				
				cout<<"Enter Item Number : ";
				cin>>sub_choice;
				
				cout<<"Enter quantity : ";
				cin>>quantity;
			
			switch (sub_choice){
				
				case 1:
					bill =(bill + 1050 * quantity);
					break;
				case 2:
					bill = (bill + 1800 * quantity);
					break;
				case 3:
					bill = (bill + 450 * quantity);
					break;
				case 4:
					bill = (bill + 1050 * quantity);
					break;
				default:
					cout<<"Invalid Item you entered!\n";
			}
			
			cout<<"Do you want to order more from Lunch (1 = Yes , 0 = No) : ";
			cin>>again_sub2;
			
				
			}
			while (again_sub2 == 1);
			break;
			
		case 3:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
			cout<<"\n\t\t<------------Dinner------------>\n\n";	
			
		do{							// Dinner
		
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			cout<<"1. Chicken Karahi (RS. 1050/KG)\n";
			cout<<"2. Mutton Karahi (RS. 1800/KG)\n";
			cout<<"3. Egg Fried Rice (RS.450/Plate)\n";
			cout<<"4. BBQ (RS. 1050/dozen)\n";
			cout<<"5. Saji (RS. 800/KG)\n";
			
			cout<<"Enter Item Number : ";
			cin>>sub_choice;
		
			cout<<"Enter quantity : ";
			cin>>quantity;
		switch (sub_choice){
			
				case 1:
					bill =(bill + 1050 * quantity);
					break;
				case 2:
					bill = (bill + 1800 * quantity);
					break;
				case 3:
					bill = (bill + 450 * quantity);
					break;
				case 4:
					bill = (bill + 1050 * quantity);
					break;
				case 5:
					bill = (bill + 800 * quantity);
					break;
				default:
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
					cout<<"Invalid Item you entered!\n";
			}
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
			cout<<"Do you want to order more from Dinner (1 = Yes , 0 = No) : ";
			cin>>again_sub3;
			
				
			}
			while (again_sub3 == 1);
			break;
		case 4:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
			cout<<"Total Bill RS : "<<bill<<endl;		
			cout<<"\n\t\t=======Thank you for Visiting!========";
			return 0;
	
		default:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout<<"Invalid Main Menu Choice! Please Correct One --->\n";	
			
		}				
		
			
		}while (true);
	
		return 0;			
			
	}
