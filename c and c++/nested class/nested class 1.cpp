#include<iostream>
using namespace std;
class A{
	public:
		class b{
			public:
				get(){
					cout<<"hi";
				}
		};
};
main(){
	//base class ::nested class obj;
	//obj.function();
	A::b obj;
	obj.get();
}
