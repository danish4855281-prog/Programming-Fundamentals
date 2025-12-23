#include<iostream>
using namespace std;
int main (){
	
	int temperature;
	cout << "Enter The Range of Temperature : ";
	cin >> temperature;
	
	if (temperature >= 40){
		cout << " Stay indoors because it is extremely hot and could be dangerous to health." <<endl;
	}
	 
	else if (temperature >= 30 && temperature <= 39){
		cout << " Drinking plenty of water to stay hydrated in the hot weather." <<endl;
	}
	
	else if (temperature >=20 && temperature <= 29){
		cout << " The Weather is pleasant and suitable for outdoor Activities." <<endl;
	}
	
	else        // (temperature <=20){
	
		cout << " Wearing warm clothes to stay comfortable in the cooler weather." <<endl;
	

	
	return 0;
	

}
