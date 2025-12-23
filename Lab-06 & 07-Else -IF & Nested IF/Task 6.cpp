#include <iostream>
#include <string>
using namespace std;
int main (){
	
	
	string  username,password, role;
	
	cout<<"Enter Username : ";
	cin>>username;
	
	cout<<"Enter your Password : ";
	cin>>password;
	
	if(username == "admin" && password == "password123"){
			cout<<"\n\t\t***** Authentication Successful! *****"<<endl;
		
		
		// Enter role after Authentication succussful
		
		cout<<"\nEnter Your Role : ";
		cin>>role;
		if (role == "admin"){
			cout<<"\n\t\t*** Full Access! ***";
		}
		else if (role == "Guest"){
			cout<<"\n\t\t*** Limited Access! ***";
		}
		else{
			cout<<"\n\t\t** No Access! **";
		}
		}
		else{
			cout<<"\n\t\t*** Authentication Fail. Access Denied. ***";
		}
	
	return 0;	
}
