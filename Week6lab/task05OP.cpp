#include<iostream>
using namespace std;

float payable(string day, string month, float purchaseAmount);
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
        float result=payable(day,month,purchaseAmount);
        cout<<"Payable Amount after discount: "<<result;
}
float payable(string day, string month, float purchaseAmount)
{
        float result=purchaseAmount;
        if(day=="Sunday" && month=="October")
        {result=purchaseAmount-((purchaseAmount*10.0)/100.0);
         return result;}
        if(day=="Sunday")
        {result=purchaseAmount-((purchaseAmount*5.0)/100.0);
         return result;}
        return result;
}