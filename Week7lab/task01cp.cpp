#include<iostream>
using namespace std;

void printTable(int number);
main()
    {
        int number;
        cout<<"Enter a number: ";
        cin>>number;
        printTable(number);
    }
void printTable(int number)
{
    int prod=1;
    for(int i=1;i<=10;i++)
    {prod=number*i;
    cout<<number<<" x "<<i<<" = "<<prod<<endl;}

}