#include <iostream>
using namespace std;
int main (){
	
	int n,a;
	cout<<"Enter a number for which you want to print the table : ";
	cin>>n;
	cout<<"\nEnter the limit till which you want to print the table : ";
	cin>>a;
	
	int i = 1;
	while (i <= a){
		cout<<n<<"*"<<i<<"="<<n*i<<endl;
		i++;	
	}	
	
	return 0;
}
