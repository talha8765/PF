#include<iostream>
using namespace std;

void calculatefuel(double distance);
main(){
	double distance;
	cout<<"Enter the distance: ";
	cin>>distance;
	calculatefuel(distance);
}
void calculatefuel(double distance)
{
	double fuel;
	fuel=distance*10;
	cout<<"Fuel needed: "<<fuel;


}