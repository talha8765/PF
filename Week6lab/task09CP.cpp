#include<iostream>
using namespace std;

string charTitle(int age, char gender);
main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    char gender;
    cout<<"Enter your gender (m/f): ";
    cin>>gender;
    string personal=charTitle(age,gender);
    cout<<"Your personal title is: "<<personal;
}
string charTitle(int age, char gender)
{
    string personal;
    if(gender=='m' && age>=16)
    {personal="Mr.";}
    if(gender=='m' && age<16)
    {personal="Master";}
    if(gender=='f' && age>=16)
    {personal="Ms.";}
    if(gender=='f' && age<16)
    {personal="Miss";}
    return personal;
}