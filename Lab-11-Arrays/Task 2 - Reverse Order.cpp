#include<iostream>
using namespace std;
int main (){
	
	int N;
	cout << "Enter the size of array : ";
	cin >> N;
	
	int arr[N];
	cout << "\nEnter "<< N << " of the elements (using space) : ";
	
	for (int i = 0; i < N; i++){
		
		cin >> arr[i];
	}

	cout << "\nArray in Reverse Order : ";
	for (int i = N - 1; i >= 0; i--){
		
		cout << arr[i] << " ";
	}
	cout << endl;
	
	
	return 0;
}










