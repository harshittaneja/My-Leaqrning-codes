#include<iostream>
using namespace std;
class base{
public:
	int x,y;
  //virtual 
   get(){
	cout<<"enter the global variables:";
	cin>>x>>y;
	
}	
//if you want to derived class variable virtual to base class
//program work base class variable
};
class derived:public base{
	public:
		int p,q;
		 get(){
			cout<<" enter the variable:";
			cin>>p>>q;
			
		}
};
main(){
	base  *ob;//rule for rutime polymorphism base pointer and derived class  
	derived  obj;
	ob=&obj;
	ob->get();
	cout<<obj.x;
	cout<<obj.p ;
}
