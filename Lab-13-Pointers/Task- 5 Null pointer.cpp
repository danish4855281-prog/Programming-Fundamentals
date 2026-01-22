#include<iostream>
using namespace std;

int main(){
	
	int* ptr = 0;
	
	if (ptr == 0){
		
		cout << "\nThe pointer is null and does not point to any valid memory."<<endl;
	}
	else{
		cout << "\nThe point is not null. It points to memory address is = "<< ptr << endl;
	}
	return 0;
}


