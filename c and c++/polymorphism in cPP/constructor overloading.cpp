#include<iostream>
using namespace std;
class A{
	public:
	A(int x,int y){
		int z;
		z=x*y;
		cout<<" multiplication of two number: ";
		cout<<"\n"<<z;	
	}
};
main(){
	int a,b;
	cin>>a>>b;
	A obj2(a,b);
}
