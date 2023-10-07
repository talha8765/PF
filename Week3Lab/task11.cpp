#include<iostream>
using namespace std;

main(){
	float population;
	cout<<"Enter the current world population: ";
	cin>>population;
	float n;
	cout<<"Enter the monthly birth rate (number of births per month): ";
	cin>>n;
	float decades;
	decades=population+(n*12*30);
	cout<<"The population in three decades will be: "<<decades;






}