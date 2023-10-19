#include<iostream>
using namespace std;

int digitSum(int number);
main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    int sum=digitSum(number);
    cout<<"Sum of digits: "<<sum;
}
int digitSum(int number)
{
    int sum = 0;
    while(number>0)
    {
        int final=number%10;
        sum=sum+final;
        number=number/10;
        
    }
    return sum;
}