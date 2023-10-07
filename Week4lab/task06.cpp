#include<iostream>
using namespace std;

void pass(int score);
void fail(int sscore);
main(){
	int score;
	cout<<"Enter your score: ";
	cin>>score;
	int sscore;
	if(score>50)
	{pass(score);}
	if(score<=50)
	{fail(sscore);}

}
void pass(int score)
{
	cout<<"Pass";
}
void fail(int sscore)
{
	cout<<"Fail";
}