#include<iostream>
using namespace std;
class a{
	public:
	static int x;
	static int display(){
		cout<<x;
	}
};
int a::x=10;
main(){
	  a::display();
}
