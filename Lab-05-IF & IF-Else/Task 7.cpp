#include<iostream>
using namespace std;
int main (){
	
	int salary,work_experience;
	
	cout<<"Enter your salary amount: ";
	cin>>salary;
	
	cout<<"Enter your work experience: ";
	cin>>work_experience;
	
	if(salary>=25000 || (work_experience>5 && salary>=20000)){

		cout<<"You are eligible for the loan."<<endl;	
	}
	else{
		cout<<"You are not eligible for the loan."<<endl;
	}
	
	return 0;
	
}


