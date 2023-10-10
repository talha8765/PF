#include<iostream>
using namespace std;

bool parityAnalysis(int number);
main(){
        int number;
        cout<<"Enter a 3-digit number: ";
        cin>>number;
        bool result=parityAnalysis(number);
        cout<<result;
}
bool parityAnalysis(int number)
{
       int number1=number%10;
       int number2=number/100;
       int number3=number%100;
       int number4=number3/10;
       int sum=number1+number2+number4;
       bool result;
       if(sum%2==0){
            if(number%2==0){
                result=true;
            }
             else
            {result=false;}
       }
       
        if(sum%2==1){
            if(number%2==1){
                result=true;
            }
             else
            {result=false;}
        }
        
        return result;
}