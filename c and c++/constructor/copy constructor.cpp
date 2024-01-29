#include<iostream>
using namespace std;
class a{
	public:
		int x,y;
		//default constructor//
		a(){
			x=10;
			y=20;
		}
		//paramertise constructor//
		a(a &obj){
			x=obj.x;
		
			
		}
		
};
main(){
	a obj;
	cout<<obj.x;
	a obj1=obj;
}
