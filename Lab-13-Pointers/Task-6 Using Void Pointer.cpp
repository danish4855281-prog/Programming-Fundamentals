#include<iostream>
using namespace std;

int main (){
	
	int num = 30;
	
	void* ptr = &num;
	
	cout << "\nValue of num using void pointer is = " << *(int*)ptr << endl;
	
	return 0;
}
