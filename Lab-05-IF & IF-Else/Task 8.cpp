#include<iostream>
using namespace std;
int main (){
	
char grade;
cout<< "Enter Employee Grade (A, B, or C): ";
cin>>grade;
int years;
cout<<"Enter Years of Service: ";
cin>>years;

float basic_salary;
float bonus;
float gross_salary;
float tax;
float Tax_percent;
float net_salary;


// Basic Salary Based on Grade

basic_salary = 0;
if( grade == 'A'||grade == 'a'){

    basic_salary = 50000;
cout<<"Basic Salary: "<<basic_salary<<endl;
}
if(grade == 'B'||grade == 'b'){

    basic_salary = 30000;
	cout<<"Basic Salary: "<<basic_salary<<endl;
}
if (grade == 'C'||grade == 'c'){

    basic_salary = 20000;
cout<<"Basic Salary: "<<basic_salary<<endl;
}
  // Bonus Calculation
  
if (years >= 10){

    bonus = 0.1 * basic_salary;
cout<<"Bonus Amount : "<<bonus<<endl;
}
if (years >= 5 && years <= 9){

    bonus = 0.5 * basic_salary;
cout<<"Bonus Amount : "<<bonus<<endl;
}
if (years < 5){

    bonus = 0;
cout<<"Bonus Amount : "<<bonus<<endl;
}
  //  Gross Salary
   
gross_salary = basic_salary + bonus;
cout<<"Gross Salary: "<<gross_salary<<endl;

  //  Tax Calculation
   
if (gross_salary > 40000){

    tax = gross_salary* 0.2;
cout<<"Tax Deducted: "<<tax<<endl;
}
if (gross_salary >= 30000 && gross_salary <= 40000){

    tax = gross_salary * 0.1;
cout<<"Tax Deducted: "<<tax<<endl;
}
if (gross_salary < 30000){

    tax = 0;
cout<<"Tax Deducted: "<<tax<<endl;
}
  //  Net Salary
  
net_salary = gross_salary - tax;
cout<<"Net Salary : "<<net_salary<<endl;

return 0;
}



