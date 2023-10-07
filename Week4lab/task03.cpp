#include<iostream>
using namespace std;

void sides(float length);
main(){
	float length;
	cout<<"Enter the side length of the Rubik's Cube: ";
	cin>>length;
	sides(length);
}
void sides(float length)
{
	float stickers;
	stickers=length*length*6;
	cout<<"Number of stickers needed: "<<stickers;


}
