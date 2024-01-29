#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float area, s,a,b,c;
	cout<<"enter frist sides :";
	cin>>a;
	cout<<"\n enter second side:";
	cin>>b;
	cout<<"\n enter the third side:";
	cin>>c;
	s=a+b+c/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"\n area  of triangle using heorns formula is: "<<area;
}
