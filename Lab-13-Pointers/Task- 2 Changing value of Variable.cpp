#include<iostream>
using namespace std;

int main (){
	
	int num = 20;
	int* ptr = &num;
	
	cout << "Original value of num = "<< num << endl;
	
	 *ptr = 30;
	 
	 cout << "\nModify value of num using pointer is = "<< *ptr << endl;
	 
	 return 0;	
	
}
