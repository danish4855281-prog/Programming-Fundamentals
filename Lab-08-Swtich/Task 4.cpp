#include <iostream>
using namespace std;
int main (){
	
	float USD,con_amount;
	int choice;
	
	cout<<"Enter amount in USD:";
	cin>>USD;
	cout<<"\nSelect Currency to convet to:\n";
	cout<<"1 for PKR\n2 for INR\n3 for EURO";
	cout<<"\nEnter your choice (1-3): ";
	cin>>choice;
	
	switch (choice){
		case 1:
			con_amount = USD * 281.55;        // USD to PKR
			cout<<"\nConverted amount in PKR: "<<con_amount<<endl;
			break;
			
		case 2:
			con_amount = USD * 89.58;          // USD to INR
			cout<<"\nConverted amount in INR: "<<con_amount<<endl;
			break;
		
		case 3:
			con_amount = USD * 0.86;          // USD to EURO
			cout<<"\nConverted amount in EURO: "<<con_amount<<endl;
			break;
			
		default:
			cout<<"\nInvalid Choice.Please select 1, 2, or 3"<<endl;
	}
	
	return 0;
	
}
