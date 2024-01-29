//virtual pointer demonstartion
#include<iostream>
using namespace std;
class A{
	public:
		int x, y;
		// if we declare virtual get(){body } then this function can't be call by B refrence object
		 get(){
			cout<<" enter the value of x and y:";
			cin>>x>>y;
			cout<<"  "<<"sum ="<<x+y;
		}
		show(int x,int y){
			cout<<" mul ="<<x*y;
		}
		put(){
			cout<<" nice to meet you";
		}
		
};
class b:public A{
	public:
	void get(){
			cout<<" hello ";
		}
		int show(){
			cout<<" x and y";
		}
		put(float x,float y)
		{
			cout<<" hi";
		}
};
main(){
	//pointer type object is created
	A *ob;
	//pointer type object is created
	b obj;
	//getting address of obj into ob means putting refrence of derived class into base class
	ob=&obj;
	//pointer object calling function of class
	//as get function is not declared virtual then it will calls class A get function not class B but it  has reference of B
	// so it oppose the concept of operator overridding
	ob->get();
	ob->show(5,6);
	ob->put();
	
}
