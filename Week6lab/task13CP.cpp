#include<iostream>
using namespace std;

float lowestPrice(int kilometers, string day);
main(){
    int kilometers;
    cout<<"Enter the number of kilometers: ";
    cin>>kilometers;
    string day;
    cout<<"Enter the period of the day (day/night): ";
    cin>>day;
    float result=lowestPrice(kilometers,day);
    cout<<"Lowest price for "<<kilometers<<" kilometers: "<<result<<" EUR"; 
}
float lowestPrice(int kilometers, string day){
    float result;
    if(kilometers<20 && day=="day")
    {result=0.70+(kilometers*0.79);}
    if(kilometers<20 && day=="night")
    {result=0.70+(kilometers*0.90);}
    if(((kilometers>=20 && kilometers<100) && (day=="day" || day=="night")))
    {result=kilometers*0.09;}
    if(kilometers>=100  && (day=="day" || day=="night"))
    {result=kilometers*0.06;}
    return result;

    
}
