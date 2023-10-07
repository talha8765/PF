#include<iostream>
using namespace std;

void calculatePayableAmount(string day,float value);

main(){
	string day;
	cout<<"Enter the day of purchase: ";
	cin>>day;
	float value;
	cout<<"Enter the total purchase amount: $";
	cin>>value;
	if(day=="Sunday")
	{calculatePayableAmount(day,value);}
}
void calculatePayableAmount(string day,float value)
{
	
	float payable;
	payable=value-((value*10)/100);
	cout<<"Payable Amount: $"<<payable;
}