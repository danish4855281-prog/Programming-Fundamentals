#include<iostream>
using namespace std;
int main (){
	
	int sum = 0;
	double average;
	int arr[4] = {2,4,6,8,};
	
	for (int i = 0; i < 4; i++){
		
		sum = sum + arr[i];
	}
	cout << "The sum of all element is : "<< sum << endl;
	cout << "\nThe average of all element is : "<< sum/4 << endl;
	
	return 0;
}
