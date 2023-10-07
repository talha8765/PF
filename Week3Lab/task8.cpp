#include<iostream>
using namespace std;

main(){
	float voltage;
	cout<<"Enter voltage (in volts): ";
	cin>>voltage;
	float current;
	cout<<"Enter current (in amperes): ";
	cin>>current;
	float power;
	power=voltage*current;
	cout<<"The power is "<<power<<" watts.";




}