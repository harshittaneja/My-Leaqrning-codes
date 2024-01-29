#include<iostream>
using namespace std;
main(){
	//data varaiable
int x=2;
//integer type pointer 
int *p;
p=&x;
cout<<"\n x value :"<<x;
cout<<"\n &x conatins address of x:"<<&x;
//p also contain address of x as p is pointer
cout<<"\n p also conatain address of x as p is pointer";
cout<<"\n p  :"<<p;
//&p contain address of pointer location in memory 
cout<<"\n &p :"<<&p;
//*p ki andar value hai us variable x jiska address p main hai
cout<<"\n *p :"<<*p;
}


