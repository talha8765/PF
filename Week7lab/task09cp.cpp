#include<iostream>
using namespace std;

int calculatePrice(int money, int year);
main()
{
    int money;
    cout<<"Enter Money: ";
    cin>>money;
    int year;
    cout<<"Enter Year: ";
    cin>>year;
    int result=calculatePrice(money,year);
    if(result>=0)
    {cout<<"Yes! He will live a carefree life and will have "<<result<<" dollars left.";}
    if(result<0)
    {cout<<"He will need "<<(-1*result)<<" dollars to survive.";}
}
int calculatePrice(int money, int year)
{
    int result=0;
    for(int i=1800;i<=year;i+=2)
    {result+=12000;}
    for(int i=1801;i<=year;i+=2)
    {int age=18;
    result=result+12000+50*((i-1800)+age);}
    int final=money-result;
    return final;
}
