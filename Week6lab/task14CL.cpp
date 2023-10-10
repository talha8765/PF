#include<iostream>
using namespace std;

string calculateCost(float budget, string category, int numPeople);
main(){
    float budget;
    cout<<"Enter the budget: ";
    cin>>budget;
    string category;
    cout<<"Enter the category (VIP/Normal): ";
    cin>>category;
    int numPeople;
    cout<<"Enter the number of people in the group: ";
    cin>>numPeople;
    string final=calculateCost(budget,category,numPeople);
    cout<<final;
}
string calculateCost(float budget, string category, int numPeople)
{
    float result;
    float num;
    float calculate;
    
    
    if(category=="VIP" && numPeople>=1 && numPeople<=4 )
    {num=numPeople*499.99;
     calculate=budget-(0.75*budget);
     result=calculate-num;}
    if(category=="VIP" && numPeople>=5 && numPeople<=9)
    {num=numPeople*499.99;
     calculate=budget-(0.6*budget);
     result=calculate-num;}
    if(category=="VIP" && numPeople>=10 && numPeople<=24 )
    {num=numPeople*499.99;
     calculate=budget-(0.5*budget);
     result=calculate-num;}
    if(category=="VIP" && numPeople>=25 && numPeople<=49 )
    {num=numPeople*499.99;
     calculate=budget-(0.4*budget);
     result=calculate-num;}
    if(category=="VIP" && numPeople>=50 )
    {num=numPeople*499.99;
     calculate=budget-(0.25*budget);
     result=calculate-num;}
     if(category=="Normal" && numPeople>=1 && numPeople<=4 )
    {calculate=(0.75*budget);
     num=numPeople*249.99;
     calculate=calculate+num;
     result=budget-calculate;}
    if(category=="Normal" && numPeople>=5 && numPeople<=9)
    {calculate=(0.6*budget);
     num=numPeople*249.99;
     calculate=calculate+num;
     result=budget-calculate;}
    if(category=="Normal" && numPeople>=10 && numPeople<=24 )
    {calculate=(0.5*budget);
     num=numPeople*249.99;
     calculate=calculate+num;
     result=budget-calculate;}
    if(category=="Normal" && numPeople>=25 && numPeople<=49 )
    {calculate=(0.4*budget);
     num=numPeople*249.99;
     calculate=calculate+num;
     result=budget-calculate;}
    if(category=="Normal" && numPeople>=50 )
    {calculate=(0.25*budget);
     num=numPeople*249.99;
     calculate=calculate+num;
     result=budget-calculate;}
    if(result<0)
    {result=-(result);
     
     return"Not enough money! You need "+to_string(result)+" leva.";
     
    }
    if(result>0)
    {
     return"Yes! You have "+to_string(result)+" leva left.";
    }

     return "";
     
}