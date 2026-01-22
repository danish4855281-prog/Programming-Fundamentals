#include<iostream>
using namespace std;

	long long factorial (int n){
		int result = 1;
		
		for (int i = 1; i <= n; i++){
			result *= i;
		}
		return result;
	}
	int main (){
		int num;
		cout << "Enter a number : ";
		cin >> num;
		
		if (num < 0){
			cout << "The factorial of Nagetive number is not defined.";
		}
		else{
			long long fact = factorial(num);
			cout << "The factorial of "<<num<< " is = "<<fact<<endl;
		}
		return 0;
	}
