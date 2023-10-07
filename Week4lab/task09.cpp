#include<iostream>
using namespace std;

void calculatefuel(double distance);
main(){
	double distance;
	cout<<"Enter the distance: ";
	cin>>distance;
	if(distance>=10)
	{calculatefuel(distance);}
	if(distance<10)
	{cout<<"Fuel needed: 100";}
}
void calculatefuel(double distance)
{
	double fuel;
	fuel=distance*10;
	cout<<"Fuel needed: "<<fuel;


}