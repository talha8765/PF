#include<iostream>
using namespace std;

void divide(float inches);
main(){
	float inches;
	cout<<"Enter the measurement in inches: ";
	cin>>inches;
	divide(inches);
}
void divide(float inches)
{
	float feet;
	feet=inches/12.0;
	cout<<"Equivalent in feet: "<<feet;

}