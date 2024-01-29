#include<iostream>
using namespace std;
class test{
	public:
		int x;
		test(){
		x=0;
	}
	get()
	{
		cin>>x;
	}
		int operator ++(){
			x--;
	}
	display()
	{
		cout<<x;
	}
};
main(){
	test obj;
	obj.get();
	++obj;
	++obj;
	++obj;
	obj.display();
}
