#include<iostream>
using namespace std;
int main (){
	
	 int n;
	 long long fact = 1;
	 
	 cout << "Enter a number : ";
	 cin >> n;
	 
	 if (n < 0){
	 	cout << "The factorial of Nagetive number is not defined.";
	 }
	else{
		for (int i = 1; i <= n; i++){
			
			fact = fact * i;
		}
		cout << "The factorial of "<<n<< " is = "<<fact<<endl;
	}
    return 0;
}
	
	
