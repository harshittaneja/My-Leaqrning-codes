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
		A operator+(A ob){
			ob.a=a+ob.a;
			return ob;
			
			
		}
};
main(){
	A obj1,obj2;
	obj1.get();
	obj2.get();
	obj2=obj1+obj2;
	obj2.display();
}
