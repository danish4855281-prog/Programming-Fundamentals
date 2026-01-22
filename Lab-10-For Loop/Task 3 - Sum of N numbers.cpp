#include<iostream>
using namespace std;
int main (){
	
	int N;
	int sum = 0;
	cout << "Enter a number limit : ";
	cin >> N;
	
	for (int i = 1; i <= N; i++){
		sum = sum + i;
		}
		
		cout <<" The sum of "<< N <<" natural number is = "<<sum<<endl;
		
		return 0;
}
