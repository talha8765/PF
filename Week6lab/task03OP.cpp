#include<iostream>
using namespace std;

float perimeter(char shape, float value);
main(){
        char shape;
        cout<<"Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
        cin>>shape;
        float value;
        cout<<"Enter the value: ";
        cin>>value;
        float result=perimeter(shape,value);
        cout<<"The perimeter is: "<<result;
}
float perimeter(char shape, float value)
{
        float result;
        if(shape=='s')
        {result=4.0*value;}
        if(shape=='c')
        {result=6.28*value;}
        if(shape=='t')
        {result=3.0*value;}
        if(shape=='h')
        {result=6.0*value;}
        return result;
}