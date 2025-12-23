#include <iostream>
using namespace std;
int main (){
	
	int age;
	double income;
	cout << "Enter your Age : ";
	cin>>age;
	
	cout << "Enter your Income : ";
	cin>>income;
	
	if (age >= 18){
		if (income >= 30000){
			cout << "\n\t**Congratulations! You are eligible for a loan.**";
		}
		else{
		 cout << "\n\t--You meet the age requirement but are not eligible for a loan because your income is below $30,000.--";
		}
			
		
		}else {
		cout <<	"\n--You are not eligible for the loan because you are under 18 years of age.--";
		}
	
	
	return 0;
	
	
}
