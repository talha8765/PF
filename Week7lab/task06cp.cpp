#include<iostream>
using namespace std;

int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2, int gcd);
main(){
    int number1;
    cout<<"Enter the first number: ";
    cin>>number1;
    int number2;
    cout<<"Enter the second number: ";
    cin>>number2;
    int gcd=calculateGCD(number1, number2);
    cout<<"GCD: "<<gcd<<endl;
    int lcm=calculateLCM(number1, number2, gcd); 
    cout<<"LCM: "<<lcm;
}
int calculateGCD(int number1, int number2)
{   int gcd;
    while(number1!=number2)
    {
        if(number1>number2)
        {number1=number1-number2;}
        if(number2>number1)
        {number2=number2-number1;}
        gcd=number1;
    }
    return gcd;
}
int calculateLCM(int number1, int number2, int gcd)
{
    int lcm;
    lcm=(number1*number2)/gcd;
    return lcm;
}
