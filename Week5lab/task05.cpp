#include<iostream>
#include<cmath>
using namespace std;

main(){
	float a;
	cout<<"Enter the value of a: ";
	cin>>a;
	float b;
	cout<<"Enter the value of b: ";
	cin>>b;
	float c;
	cout<<"Enter the value of c: ";
	cin>>c;

	float determinant;
	determinant=(b*b)-(4*a*c);
	
	if(determinant==0)
	{float root1,root2;
	 root1=root2=(-b)/(2*a);
	 cout<<"Solution: x = "<<root1;
        }
	
	if(determinant>0)
	{float root1,root2,step1,step2;
	 root1=b*b-4*a*c;
	 step1=((-b+sqrt(root1)))/(2*a);
	 root2=b*b-4*a*c;
	 step2=((-b-sqrt(root2)))/(2*a);
	 cout<<"Solutions: x = "<<step1<<" and x = "<<step2;
	}

	if(determinant<0)
	{float root1,root2,step1,step2,i,sstep1,sstep2;
	 step1=(-b/(2*a));
	 sstep1=-((b*b)-(4*a*c));
	 root1=(sqrt(sstep1))/(2*a);
	 step2=(-b/(2*a));
	 sstep2=-((b*b)-(4*a*c));
	 root2=(sqrt(sstep2))/(2*a);
	 cout<<"Complex Solutions: x = "<<step1<<" + "<<root1<<"i and x = "<<step2<<" - "<<root2<<"i";
	}
}
