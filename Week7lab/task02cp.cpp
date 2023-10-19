#include<iostream>
using namespace std;

void generateFibonacci(int length);
main(){
    int length;
    cout<<"Enter the length of the Fibonacci series: ";
    cin>>length;
    generateFibonacci(length);
}
void generateFibonacci(int length)
{
    int num1=0;
    int num2=1;
    int nextnum=0;
    if(length==1){
        cout<<num1;
    }
    if(length==2)
    {
        cout << num1 << ", " << num2;
    }    
    if (length > 2)
    {
    cout << num1 << ", " << num2;
    for(int y=1; y<=length-2; y++)
    {
        nextnum=num1+num2;
        cout<<", "<<nextnum;
        num1=num2;
        num2=nextnum;

    }
    }
    
}
