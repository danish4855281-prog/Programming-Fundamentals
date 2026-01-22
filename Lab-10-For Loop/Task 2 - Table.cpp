#include<iostream>
using namespace std;
int main (){
	
	int n, a;
	cout << "Enter a number : ";
	cin >> n;
	cout << "Enter a limit : ";
	cin >> a;
	for (int i = 1; i <= a; i++){
		
		cout << n <<" * "<< i <<" = "<< n * i <<endl;
	}
}
