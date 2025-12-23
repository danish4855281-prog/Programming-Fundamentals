#include<iostream>
using namespace std;
int main (){
	
	float balance, withdraw;
	cout<<"Enter your account balance: ";
	cin>>balance;
	
	cout<<"Enter the amount you want to withdraw: ";
	cin>>withdraw;	
	
	if(withdraw<=balance){
		
	balance=balance-withdraw;
	
	cout<<"Withdrawal Successful"<<endl;
	
	cout<<"remaining balance: "<<balance<<endl;
	}
	else{
		cout<<"Insufficient balance."<<endl;
	}
	
	return 0;
	
}
