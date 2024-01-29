#include<iostream>
using namespace std;
int sum(int a,int b);
main()
{
	int a,b,z;
	cout<<"enter first number:";
	cin>>a;
	cout<<"enter  second number:";
	cin>>b;
	z=sum(a,b);
	cout<<z;
}
int sum(int a,int b)
{
  int z;
	z=a+b;
	return z;
}
