#include<iostream>
using namespace std;

int calculateMoney(int age, int price, int unitPrice);
main(){
    int age;
    cout<<"Enter Lilly's age: ";
    cin>>age;
    int price;
    cout<<"Enter the price of the washing machine: ";
    cin>>price;
    int unitPrice;
    cout<<"Enter the unit price of each toy: ";
    cin>>unitPrice;
    int result=calculateMoney(age,price,unitPrice);
    if(result<0)
    {
        cout<<"No!"<<endl;
        cout<<-1*result;
    }
    if(result>=0)
    {
        cout<<"Yes!"<<endl;
        cout<<result;
    }


}
int calculateMoney(int age, int price, int unitPrice)
{
    int money=0;
    int value=0;
    int toys=0;
    for(int x=2; x<=age; x+=2)
    {
        value=value+10;
        money=money+value;
        money=money-1;

    }
    for(int x=1; x<age; x+=2)
    {
        toys=toys+1;
    }
    int totalToysMoney=toys*unitPrice;
    int totalMoney=totalToysMoney+money;
    int result = totalMoney-price;
    return result;
}
