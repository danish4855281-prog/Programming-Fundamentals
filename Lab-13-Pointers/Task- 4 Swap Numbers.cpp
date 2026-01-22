#include<iostream>
using namespace std;

void swapNumbers(int *a, int *b){
	
	int temp = *a;
	*a = *b;
	*b = temp;
	
}	
	int main (){
		
		int num1 = 10, num2 = 20;
		cout << "\n\tBefore Swaping."<<endl;
		cout << "num1 = "<< num1 << " , num2 = "<< num2 << endl;
		
		swapNumbers(&num1, &num2);
		
		cout << "\n\tAfte Swaping."<<endl;
		cout << "num1 = "<< num1 << " , num2 = "<< num2 <<endl;
		
	return 0;	
		
	}
	
	

