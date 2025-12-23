#include <iostream>
using namespace std;
int main (){
	
	double num1, num2;
	cout<<"Enter your first number : ";
	cin>>num1;
	cout<<"Enter your second number : ";
	cin>>num2;
	char op;
	cout<<"Enter an operator ( + , - , * , / ) : ";
	cin>>op;
	
	// (+) for addition (-) for sub (*) for multip (/) for division.
	
	switch (op){
	case '+':
	cout<<"Result : "<<num1 + num2<<endl;
	break;
		
	case '-':
	cout<<"Result : "<<num1 - num2<<endl;
	break;
	
	case '*':
	cout<<"Result : "<<num1 * num2<<endl;
	break;
	
	case '/':
	cout<<"Result : "<<num1 / num2<<endl;
	break;
	
	default:
	cout<<"\n\t** Error!  Your Enter Invalid Operator **";
	break;
	}
	
	return 0;
}
