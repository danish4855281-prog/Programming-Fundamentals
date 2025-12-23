#include<iostream>
using namespace std;
int main(){
	
	int account_balance, Loyal_status;
	
	cout<<"Enter your account balance : ";
	cin>>account_balance;
	cout<<" Loyality Status(1 for Loyal, 0 for not Loyal ) : ";
	cin>>Loyal_status;
	string r1= (account_balance<100)? "Low balance" : (account_balance>=100 && account_balance<=500)? 
	" Standard account" : " Premium account" ;
    cout<<"your account is : "<<r1<<endl;
    string r2= (account_balance>=200 && Loyal_status==1)? "Eligible" : " Not Eligible";
    cout<<"Special offer status : "<<r2<<endl;
    
    
	return 0;	
	
	
}
