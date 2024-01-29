#include<iostream>
#include<math.h>
using namespace std;
int quard(int,int,int);

main()
{  int x,y,z;
int quard(int,int,int);
	cout<<"to find quardtic:";
	cout<<"enter cofficient of square variable:";
	cin>>x>>y>>z;
	  quard(x,y,z);
	  
	
}
	
int quard(int a,int b,int c){
	int root1,root2,d=0;
		d=(b*b)-(4*a*c);
	if(d>0){
	cout<<"the roots are real unequal";
		root1=(-b+sqrt(d))/(2*a);
		root2=(-b-sqrt(d))/(2*a);
	}
	else if(d=0){
	cout<<"the roots are real and equal ";
}
	else
	cout<<"the roots are imaginary";
	
		root1=(-b+sqrt(d))/(2*a);
		root2=(-b-sqrt(d))/(2*a);
		
		cout<<root1<<root2;
		return 0;
	}
	

