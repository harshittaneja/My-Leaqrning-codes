#include<iostream>
using namespace std;
class a{
	public:
		get(){
			cout<<"hi";
		}
		
};
class b: public a{
	public:
	sum(){
		cout<<" nice to meet you";
	}
};
main(){
	a obj;
	//calling class function without the creating b class object
	obj::b.sum();
}
