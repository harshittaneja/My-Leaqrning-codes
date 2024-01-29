//daimond ambiguity resolve without virtual key word
#include<iostream>
using namespace std;
class b{
	public:
		get(){
			cout<<"hi";
			
		}
};
class c{
	public:
		get(){
			cout<<"hello";
		}
};
class d:public b,public c{
	public:
		
};
main(){
	d obj;
	obj.b::get();//object of inherited .base class ::function()
	
}
