#include<iostream>
using namespace std;

float totalIncome(string type,float rows,float columns);
main(){
    string type;
    cout<<"Enter the screening type (Premiere/Normal/Discount): ";
    cin>>type;
    float rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    float columns;
    cout<<"Enter the number of columns: ";
    cin>>columns;
    float Income=totalIncome(type,rows,columns);
    cout<<Income;
}
float totalIncome(string type,float rows,float columns)
{
    float Income;
    if(type=="Premiere")
    {Income=12.00*rows*columns;}
    if(type=="Normal")
    {Income=7.50*rows*columns;}
    if(type=="Discount")
    {Income=5.00*rows*columns;}
    return Income;

}