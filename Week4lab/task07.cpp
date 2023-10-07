#include<iostream>
using namespace std;

void evenorodd(int number);
main(){
	int number;
	cout<<"Enter a number: ";
	cin>>number;
	if(number%2==0)
	{evenorodd(number);}
}
void evenorodd(int number)
{
cout<<"Number "<<number<<" is even";
}