#include<iostream>
#include<cmath>
using namespace std;

main(){
	float distance;
	cout<<"Enter the distance from the base of the tree (in feet): ";
	cin>>distance;
	float angle;
	cout<<"Enter the angle of elevation (in degrees): ";
	cin>>angle;
	float radian;
	radian=(angle/57.2958);
	float height;
	height=distance*tan(radian);
	cout<<"The height of the tree is: "<<height<<" feet";
}
