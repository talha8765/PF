#include<iostream>
#include<iomanip>
using namespace std;

void histogram(int count);
main()
{
    int count;
    cout<<"Enter numbers count: ";
    cin>>count;
    histogram(count);
}
void histogram(int count)
{
    int number;
    float p1=0,p2=0,p3=0,p4=0,p5=0;
    for(int x=1; x<=count; x++)
    {
        cout<<"Enter a number: ";
        cin>>number;
        if(number>=0 && number<200)
        {p1=p1+1;}
        else if(number>=200 && number<=399)
        {p2=p2+1;}
        else if(number>=400 && number<=599)
        {p3=p3+1;}
        else if(number>=600 && number<=799)
        {p4=p4+1;}
        else if(number>=800)
        {p5=p5+1;}
    }
    float per1=(p1/count)*100;
    float per2=(p2/count)*100;
    float per3=(p3/count)*100;
    float per4=(p4/count)*100;
    float per5=(p5/count)*100;
    cout<<fixed<<setprecision(2)<<per1<<"%"<<endl;
    cout<<fixed<<setprecision(2)<<per2<<"%"<<endl;
    cout<<fixed<<setprecision(2)<<per3<<"%"<<endl;
    cout<<fixed<<setprecision(2)<<per4<<"%"<<endl;
    cout<<fixed<<setprecision(2)<<per5<<"%"<<endl;

}

