#include<iostream>
using namespace std;

main(){
	string name;
	cout<<"Enter the student's name: ";
	cin>>name;
	float mmarks;
	cout<<"Enter matriculation marks (out of 1100): ";
	cin>>mmarks;
	float imarks;
	cout<<"Enter intermediate marks (out of 550): ";
	cin>>imarks;
	float emarks;
	cout<<"Enter Ecat marks (out of 400): ";
	cin>>emarks;
	float aggregate;
	aggregate=(mmarks*10/1100)+(imarks*40/550)+(emarks*50/400);
	cout<<"Aggregate score for "<<name<<" in UET is: "<<aggregate<<"%";

}