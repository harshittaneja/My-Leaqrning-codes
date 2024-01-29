#include<iostream>
using namespace std;

class INt{
	public:
		int x;
		Int(){
			x=0;
		}
  Int operator++(INt t){
			Int  demo;
			demo.x=x+t.x;
			return  demo; 
			
			
		}
		display(){
			cout<<demo.x;
		}
};
main(){

	Int obj1=2,obj2=3,obj3=4;
	++obj1;
	++obj2;
	obj3= obj1++obj2;
	obj3.display();
}
