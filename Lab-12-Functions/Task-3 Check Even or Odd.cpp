#include<iostream>
using namespace std;
	
	void checkEvenOdd(int a){
		if (a % 2 == 0){
			cout << "	Even"<<endl;
		}
		else{
			cout << "	Odd"<<endl;
		}
	}
	int main (){
		checkEvenOdd(4);
		checkEvenOdd(5);
		checkEvenOdd(14);
		return 0;
	}
