#include<iostream>
using namespace std;
int main (){
	string password="12345";
	string new_password;
	do {
		cout<<"Enter your  Password: ";
		cin>>new_password;
		if (password!= new_password){
			cout<<"Incorrect possword!\n == Try again! ==";
		
		return 0;
	}
		}
		while (password!=new_password);
		
		cout<<"*** Access Garanted ***";
	
	
	
	
	
	
	return 0;
}
