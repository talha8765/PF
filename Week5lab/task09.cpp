#include<iostream>
using namespace std;

void timeTravel(float hours,float minutes);
main(){
        float hours;
        cout<<"Enter Hours: ";
        cin>>hours;
        float minutes;
        cout<<"Enter Minutes: ";
        cin>>minutes;
        timeTravel(hours,minutes);
}
void timeTravel(float hours,float minutes)
{
        minutes=minutes+15;
        if(minutes>59)
        {
            hours=hours+1;
            minutes=minutes-60;
        }
        if(hours>23)
        {
            hours=0;
        }
        cout<<hours<<":"<<minutes;
        
}