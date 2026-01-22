#include<iostream>
using namespace std;
int main (){
	
	int N;
	cout << "Enter size of array you want : ";
	cin >> N;
	
	int arr[N];
	cout << "Enter the "<< N << " element of the array (using space) : ";
	
	for (int i = 0; i < N; i++){
		
		cin >> arr[i];
	}
	
		int largest = arr[0];
	
	for (int i = 1; i < N; i++){
		
		if (arr[i] > largest){
			
			largest = arr[i];
		}
	}
	cout << "The largest number is "<<largest<<endl;
	
	return 0;
	
}
