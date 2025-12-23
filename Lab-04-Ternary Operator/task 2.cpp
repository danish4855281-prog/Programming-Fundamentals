#include<iostream>
using namespace std;
int main(){
	
int age1,age2,age3;

cout<<" Enter age1 : ";
cin>>age1;
cout<<" Enter age2 : ";
cin>>age2;
cout<<" Enter age3 : ";
cin>>age3;

string r1= (age1<13 && age1>0)? "child": (age1>=13 && age1<=19)? "teenager" : "Adult" ;
cout<<"Age "<<age1<<" falls under the category : "<<r1<<endl;
string r2= (age2<13 && age2>0)? "child": (age2>=13 && age2<=19)? "teenager" : "Adult" ;
cout<<"Age "<<age2<<" falls under the category : "<<r2<<endl;
string r3= (age3<13 && age3>0)? "child": (age3>=13 && age3<=19)? "teenager" : "Adult" ;
cout<<"Age "<<age3<<" falls under the category : "<<r3<<endl;
return 0;
}
