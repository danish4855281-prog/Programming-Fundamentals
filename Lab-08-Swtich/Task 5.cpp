#include <iostream>
using namespace std;
int main (){

	// ============== For Shopping System =================//
	
	int quantity,total,discount,NetPrice;
	char category;
	cout<<" ==== Choose Category===="<<endl;

	cout<<" E for Electronics."<<endl;
	cout<<" C for Clothing."<<endl;
	cout<<" G for Groceries."<<endl;
	cin>>category;
	switch (category){
		case 'E':
		cout<<" === Electronics ====";
		int electronics;
		cout<<"\n 1 for Laptop : RS 1000\n 2 for Smartphones : RS 750\n 3 for Headphones : RS 150 "<<endl;
		cin>> electronics;
		switch (electronics){
			case 1:
				cout<<"How many Laptops do you want to buy?"<<endl;
				cin>>quantity;
				total=quantity*1000;
				cout<<"The total price of the Laptops is Rs : "<<total<<endl;
				break;
			case 2:
				cout<<"How many Smartphones do you want to buy?"<<endl;
				cin>>quantity;
				total=quantity*750;
				cout<<"The total price of the Smartphones is Rs : "<<total<<endl;
				break;
			case 3:	
				cout<<"How many Headphones do you want to buy?"<<endl;
				cin>>quantity;
				total=quantity*150;
				cout<<"The total price of the Headphones is Rs : "<<total<<endl;
				break;
			}	
			break;
				
		case 'C':
		cout<<" === Clothing ====";
		int clothing;
		cout<<"\n 1 for Jacket : RS 120\n 2 for T_shirt : Rs 40\n 3 for Jeans : Rs 60"<<endl;
		cin>>clothing;
		switch (clothing){
			case 1:
				cout<<"How many Jacket do you want to buy?"<<endl;
				cin>>quantity;
				total = quantity*120;
				cout<<"The total price of the Jacket is Rs : "<<total<<endl;
				break;
			case 2:
				cout<<"How many T_shirt do you want to buy?"<<endl;
				cin>>quantity;
				total = quantity*40;
				cout<<"The total price of the T_shirt is Rs : "<<total<<endl;
				break;
			case 3:	
				cout<<"How many Jeans do you want to buy?"<<endl;
				cin>>quantity;
				total = quantity*60;
				cout<<"The total price of the Jeans is Rs : "<<total<<endl;
				break;
			}
			break;
				
		case 'G':
		cout<<" === Groceries ====";
		int groceries;
		cout<<"\n 1 for Milk : RS 2\n 2 for Bread : Rs 3\n 3 for Eggs : Rs 5"<<endl;
		cin>>groceries;		
		switch (groceries){
			case 1:
				cout<<"How many liter Milk do you want to buy?"<<endl;
				cin>>quantity;
				total = quantity*2;
				cout<<"The total price of the Milk is Rs : "<<total<<endl;
				break;
			case 2:
				cout<<"How many items do you want to buy?"<<endl;
				cin>>quantity;
				total = quantity*3;
				cout<<"The total price of the items is Rs : "<<total<<endl;
				break;
			case 3:
				cout<<"How many Eggs do you want to buy?"<<endl;
				cin>>quantity;
				total = quantity*5;
				cout<<"The total price of the Eggs is Rs : "<<total<<endl;
				break;	
			}	
			break;
				
		default:
		cout<<"Enter Correct Menu!"	<<endl;
			
			return 0;			
	}
	/// Discount System
	
	if (total<100){
		NetPrice = total;
		cout<<"\nNo Discount is available for this purchasing !"<<endl;
	}
	else if (total>=100 && total <=500){
		discount = (total/100)*10;
		cout<<"discount = "<<discount<<endl;
		NetPrice = total - discount;
	}
	else{
		discount = (total/100)*20;
		cout<<"discount = "<<discount<<endl;
		NetPrice = total - discount;
	}
	
	cout<<" \nYou just have to pay Rs : "<<NetPrice<<endl;
	
	
	return 0;
	
}
