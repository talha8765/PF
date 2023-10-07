#include<iostream>
using namespace std;

main(){
	string team;
	cout<<"Enter the name of the cricket team: ";
	cin>>team;
	float wins;
	cout<<"Enter the number of wins: ";
	cin>>wins;
	float draws;
	cout<<"Enter the number of draws: ";
	cin>>draws;
	float losses;
	cout<<"Enter the number of losses: ";
	cin>>losses;
	float points;
	points=(wins*3)+(draws*1)+(losses*0);
	cout<<team<<" has obtained "<<points<<" points in the Asia Cup tournament.";



}