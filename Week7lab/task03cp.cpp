#include<iostream>
using namespace std;

int totalDigits(int number);
main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    int numdigit=totalDigits(number);
    cout<<"Total number of digits: "<<numdigit;
}
int totalDigits(int number)
{ int numdigit;
   if(number>0)
   {  numdigit=0;
    while(number!=0)
    {
     numdigit=numdigit+1;
     number=number/10;
    } 
   }
   else{
     numdigit=1;
   }
   return numdigit;
}