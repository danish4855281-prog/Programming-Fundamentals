#include<iostream>
using namespace std;
//    Task NO 05
void calculator(){
	cout<<"+ for add\n,- for sub\n,* for mul\n/ for div\n";
	int add,sub,mul,div;
	int num1,num2;
	cout<<"Enter the number\n";
	cin>>num1;
	cin>>num2;
	char op;
	cout<<"Enter an operator\n";
	cin>>op;
	switch(op){
		    case '+':
		 add=num1+num2;
		cout<<"the sum of num1+num2 is = "<<add<<endl;
		 break;
     case '-':
		sub=num1-num2;
		cout<<"the sub of num1-num2 is = "<<sub<<endl;
		break;
	 case '*':
		mul=num1*num2;
		cout<<"the mul of num1*num2 is = "<<mul<<endl;
		break;
	 case '/':
		div=num1/num2;
		}
		int main(){
			calculator();
			
		}
