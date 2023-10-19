#include<iostream>
using namespace std;

void frequencyChecker(int number, int digit);
main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    int digit;
    cout<<"Enter the digit to check: ";
    cin>>digit;
    frequencyChecker(number,digit);
}
void frequencyChecker(int number, int digit)
{
     int num=0;
    while(number)
    {
        
        if(number%10==digit)
        {num++;}
        number=number/10;
    }
    cout<<"Frequency: "<<num;
}