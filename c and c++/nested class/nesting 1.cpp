#include<iostream>
using namespace std;
class a{
	public:
		
		class b{
			public:
				int p;
				get(){
				
				cout<<"enter the value of p:";
				cin>>p;
			}
		};
		class c:public b{
			public:
				int q;
				get2(){
				
				cout<<"\nenter the value of q:";
				cin>>q;
				cout<<"\nsum of p and q is :"<<p+q;
			}
		};
		mul(){
			int p ,q;
			cin>>p>>q;
			cout<<"\nproduct is :"<<p*q;
		}
		
};
main(){
	a::c obj;
	a  onj;
	obj.get();
	obj.get2();
	onj.mul();
	
}
