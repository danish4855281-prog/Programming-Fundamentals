#include <iostream>
using namespace std;
int main (){
 
	int s1, s2, s3;
	char g1, g2 ,g3;
	double per1,per2,per3;
	cout<<"Enter your marks in PF: ";
	cin>>s1;
	
	cout<<"Enter your marks in ICT: ";
	cin>>s2;
	
	cout<<"Enter your marks in English: ";
	cin>>s3;
	
	per1 = (s1*100/100);

	if (per1 >=90){
			g1 = 'A';
		cout<<"\n\t Grade in PF is = "<<g1<<endl;
	}
	else if (per1 >=80 && per1 <90){
		g1 = 'B';
		cout<<"\n\t Grade in PF is = "<<g1<<endl;
	}
	else if (per1 >=70 && per1 <80){
		g1 = 'C';
		cout<<"\n\t Grade in PF is = "<<g1<<endl;
	}
	
	else if (per1 >=60 && per1 <70){
		g1 = 'D';
		cout<<"\n\t Grade in PF is = "<<g1<<endl;
	}
	
	else if (per1 <60 ){
		g1 = 'F';
		cout<<"\n\t Grade in PF is = "<<g1<<endl;
		cout<<"\n\t Faild! ";
		
		return 0;
	}
	
	// For ICT Course
	
		per2 = (s2*100/100);

	if (per2 >=90){
			g2 = 'A';
		cout<<"\n\t Grade in ICT is = "<<g2<<endl;
	}
	else if (per2 >=80 && per2 <90){
		g2 = 'B';
		cout<<"\n\t Grade in ICT is = "<<g2<<endl;
	}
	else if (per2 >=70 && per2 <80){
		g2 = 'C';
		cout<<"\n\t Grade in ICT is = "<<g2<<endl;
	}
	
	else if (per2 >=60 && per2 <70){
		g2 = 'D';
		cout<<"\n\t Grade in ICT is = "<<g2<<endl;
	}
	
	else if (per2 <60 ){
		g2 = 'F';
		cout<<"\n\t Grade in ICT is = "<<g2<<endl;
		cout<<"\n\t Faild! ";
		
		return 0;
	}
	
	// For English Course
	
		per3 = (s2*100/100);

	if (per3 >=90){
			g3 = 'A';
		cout<<"\n\t Grade in English is = "<<g3<<endl;
	}
	else if (per3 >=80 && per3 <90){
		g3 = 'B';
		cout<<"\n\t Grade in English is = "<<g3<<endl;
	}
	else if (per3 >=70 && per3 <80){
		g3 = 'C';
		cout<<"\n\t Grade in English is = "<<g3<<endl;
	}
	
	else if (per3 >=60 && per3 <70){
		g3 = 'D';
		cout<<"\n\t Grade in English is = "<<g3<<endl;
	}
	
	else if (per3 <60 ){
		g3 = 'F';
		cout<<"\n\t Grade in English is = "<<g3<<endl;
		cout<<"\n\t Faild! ";
		
		return 0;
	}
	
	
	double total_marks = s1 + s2 + s3;
	cout<<"\n\t\t Overall Marks is = "<<total_marks<<endl;
	
	double total_per = (total_marks*100)/300;
	cout<<"\n\t\t Overall Percentage is = "<<total_per<<"%"<<endl;
	
	char total_grades;
		if( total_per >=90){
			total_grades ='A';
			cout<<"\n\t\t Overall grades is = "<<total_grades<<endl;
		}
		else if ( total_per >=80 && total_per <90){
			total_grades ='B';
			cout<<"\n\t\t Overall grades is = "<<total_grades<<endl;
		}	
		else if ( total_per >=70 && total_per <80){
			total_grades ='C';
			cout<<"\n\t\t Overall grades is = "<<total_grades<<endl;
		}		
		else if ( total_per >=60 && total_per <70){
			total_grades ='D';
			cout<<"\n\t\t Overall grades is = "<<total_grades<<endl;
		}	
		else if ( total_per <60){
			total_grades ='F';
			cout<<"\n\t\t Overall grades is = "<<total_grades<<endl;
		}	
		else
		cout<<"\n\t\t**** Faild! ****\n"<<endl;
	
	
	// Condition to check weather the student is eligible for schoarship are not ?-----------
		
	cout<<"\n\t\t\t===========Scholarship Eligibility==============\n"<<endl;
		
	if ((g1 == 'A' && g2 == 'A' && g3 == 'A') && (total_marks >= 270)){
		cout<<"\n\t\t\t\t\t\t **Congratulation** \n\n\t\t\t <----------You Are Eligible For The Merit Scholarship-------->\n";
	}
	else if ((g1 == 'A' || g1 == 'B') && (g2 == 'A' || g2 == 'B') && (g3 == 'A' || g3 == 'B') && (total_marks >= 240)){
		cout<<"\n\t\t\t\t\t\t **Congratulation** \n\n\t\t\t <----------You Are Eligible For Standard Scholarship-------->\n";
	}
	else{
	cout<<"\n\t\t\t ------+++ Prepared Well For Next Scholarship +++-------\n";
	
	cout<<"\n\t\t\t *****BEST OF LUCK ! FOR THE NEXT TIME*****";	
	}
	
	
	
	return 0;
}
	


