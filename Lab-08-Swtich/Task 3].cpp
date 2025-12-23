#include <iostream>
using namespace std;
int main (){
	
	int choice;
	double area, length, width, base, height, radius;
	double const pi = 3.14;
	
	cout<<"Select the shape to calculate area.\n ";
	cout<<"1. Circle\n";
	cout<<"2. Rectangle\n";
	cout<<"3. Triangle\n";
	cout<<"\n\tEnter your choice (1-3): ";
	cin>>choice;
	
	switch (choice){
		case 1:
			cout<<"Enter radius of the Circle: ";
			cin>>radius;
			area = (pi*radius*radius);
			cout<<"The area of Circle is = "<<area<<endl;
			break;
			
		case 2:
			cout<<"Enter length of Rectangle: ";
			cin>>length;
			cout<<"Enter width of Rectangle: ";
			cin>>width;
			area = length * width;
			cout<<"The area of Rectangle is = "<<area<<endl;
			break;
				
		case 3:
			cout<<"Enter base of Triangle: ";
			cin>>base;
			cout<<"Enter height of Triangle: ";
			cin>>height;
			area = (base*height)/2;
			cout<<"The area of Triangle is = "<<area<<endl;
			break;
			
		default:
			cout<<"\n\tError: Invalid Choice. Please select (1,2 and 3)!";
		}	
	
	
	return 0;
}
