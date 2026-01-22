#include<iostream>
using namespace std;
int main (){
	
	int length;
	int arr[] = {2,3,4,5,6,5,6,7,8,9};
//	
//	for (int i = 0; i < 5; i++){
		
		length =sizeof(arr)/sizeof(arr[0]);
//}
	cout << "The length of array is : "<< length << endl;
	
	return 0;
}
