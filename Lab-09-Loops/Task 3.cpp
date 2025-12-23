#include <iostream>
using namespace std;
int main (){
	
	int n;
	cout<<"Enter a positive number:  ";
	cin>>n;
	while (n <= 0){
	cout<<"    Erorr! \n\tThe number you entered is not Positive.\n"<<endl;
	cout<<"Please enter positive number : ";
	cin>>n;
	}
	
	cout<<"You entered : "<<n<<endl;
	
	return 0;
	
}
