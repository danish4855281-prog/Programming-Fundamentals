#include<iostream>
#include<iomanip>
using namespace std;
int main(){

    double num1=85.5,num2=90.75,num3=88.25;
    double average;
    average=(num1+num2+num3)/3;
    cout<<fixed<<setprecision(2)<<"The average of "<<num1<<","<<num2<<"and"<<num3<<"=";
    cout<<average;

    return 0;

}
