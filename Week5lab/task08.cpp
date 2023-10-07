#include<iostream>
using namespace std;

void evenorodd(int number);
main(){
        int number;
        cout<<"Enter a five-digit number: ";
        cin>>number;
        evenorodd(number);
        
}
void evenorodd(int number)
{
        int addition=0;
        addition=addition+number%10;
        number=number/10;
        if(addition%2==1)
        {cout<<"Oddish";}
        if(addition%2==0)
        {cout<<"Evenish";}

}