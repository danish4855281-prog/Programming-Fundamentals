#include<iostream>
#include<iomanip>
using namespace std;
int main(){
 	double item_1=12.95,item_2=24.95,item_3=6.95, item_4=14.95,item_5=3.95;
    double Subtotal,sale_tax,total_amount;
    cout<<"Price of item 1: $"<<item_1<<endl;
    cout<<"Price of item 2: $"<<item_2<<endl;
    cout<<"Price of item 3: $"<<item_3<<endl;
    cout<<"Price of item 4: $"<<item_4<<endl;
    cout<<"Price of item 5: $"<<item_5<<endl;

    Subtotal=item_1+item_2+item_3+item_4+item_5;
    cout<<"Subtotal: $"<<Subtotal<<endl;
    sale_tax=(6*Subtotal/100);
    cout<<"SaleTax (6%):"<<"$"<<sale_tax<<endl;
    total_amount=Subtotal+sale_tax;
    cout<<"Total: "<<"$"<<total_amount<<endl;

    return 0;
	} 
