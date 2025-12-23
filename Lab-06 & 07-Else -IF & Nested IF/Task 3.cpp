#include <iostream>
using namespace std;
int main (){
	
	string name,password;
	cout<<"Enter your name here: ";
	cin>>name;
	
	cout<<"Enter Password: ";
	cin>>password;
	
	if(name == "admin" && password == "12345"){
		cout<<"Access Granted!";
	}
	
	else if (name == "admin" && password != "12345"){
		cout<<"Wrong Password.";
	}
	
	else
	cout<<"User Not Found.";
	
	return 0;
	
	
}
