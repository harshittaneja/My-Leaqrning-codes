#include<iostream>
using namespace std;
class A{
	public:
	int l,b;
	int c;
	public:
	A()
	{cout<<"enter the lenght & breath:";
		cin>>l>>b;
	}
	A(int l,int b){
		c=l*b;
		cout<<"area:  "<<c;
		cout<<"\n";
		
	}
};
main(){
	A s;
	A s1(s.l,s.b);

}
