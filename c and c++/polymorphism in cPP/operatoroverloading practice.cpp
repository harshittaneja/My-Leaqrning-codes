#include<iostream>
using namespace std;
class A{
	public:
		int a;
		int get(){
			cout<<" enter the value of a:";
			cin>>a;
			
		}
		display(){
			cout<<"sum is:"<<a;
			
		}
		void operator+(A ob){
			a=a+ob.a;
			
			
		}
};
main(){
	A obj1,obj2;
	obj1.get();
	obj2.get();
	obj1+obj2;
	obj1.display();
}
