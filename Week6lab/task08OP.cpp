#include<iostream>
using namespace std;

float discount(string day, string month, float purchaseAmount);
main(){
     string day;
    cout<<"Enter Purchase Day: ";
    cin>>day;
    string month;
    cout<<"Enter Purchase Month: ";
    cin>>month;
    float purchaseAmount;
    cout<<"Enter Purchase Amount: ";
    cin>>purchaseAmount;
    float payable=discount(day,month,purchaseAmount);
    cout<<"Payable Amount after discount: "<<payable;
}
float discount(string day, string month, float purchaseAmount)
{
    float payable=purchaseAmount;
    if(day=="Sunday" && (month=="October" || month=="March" || month=="August"))
    {payable=purchaseAmount-((purchaseAmount*10.0)/100.0);
     return payable;}
    if(day=="Monday" && (month=="November" || month=="December"))
    {payable=purchaseAmount-((purchaseAmount*5.0)/100.0);}
    return payable;
}
