#include<iostream>
using namespace std;

string checkAlphabetCase(char ch);
main(){
	char ch;
	string result;
	cout<<"Enter a character (A/a): ";
	cin>>ch;
	result=checkAlphabetCase(ch);
}
string checkAlphabetCase(char ch)
{
	string result;
	if(ch=='A')
	{cout<<"You have entered Capital "<<ch;
	 }
	if(ch=='a')
	{cout<<"You have entered small "<<ch;
	}
	return result;
}