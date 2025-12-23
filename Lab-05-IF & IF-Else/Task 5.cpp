#include<iostream>
using namespace std;
int main (){
     
	char signal;
	cout<<"Enter the colour signal (R , G , Y): ";
	cin>>signal;
	if(signal == 'R'){
		cout<<"Red: Stop"<<endl;
	}
	
	if(signal == 'G'){
		cout<<"Green: Go"<<endl;
	}
	
	if(signal == 'Y'){
		cout<<"Yellow: Slow Down"<<endl;
	}
	
	
	return 0;
		
}


