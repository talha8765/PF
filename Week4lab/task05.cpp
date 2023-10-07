#include<iostream>
using namespace std;

void living(int age);
void nonliving(int dead);
main(){
	int age;
	int dead;
	cout<<"Enter your age: ";
	cin>>age;
	if(age>=18)
	{living (age);}
	if(age<18)
	{nonliving(dead);}
}
void living(int age)
{
cout<<"You are eligible to vote.";
}
void nonliving(int dead)
{
cout<<"You are not eligible to vote.";
}