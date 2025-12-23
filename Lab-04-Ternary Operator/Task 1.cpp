#include <iostream>
using namespace std;
int main(){
	
	int num1,num2;
	cout<<"Enter an integer : ";
	cin>>num1;
	cout<<"Enter another integer : ";
	cin>>num2;
	
	string r1= (num1%2 == 0)? "even":"odd";
	cout<<"The number "<<num1<<" is "<<r1<<endl;
	
	string r2= (num2%2 == 0)? "even":"odd";
	cout<<"The number "<<num2<<" is "<<r2<<endl;
	
	
	return 0;
}



