#include<iostream>
using namespace std;
class a{
	public:
		int x,y,c;
		void getata(){
		
			cout<<" enter the value of x and :";
			cin>>x;}
			void getdata1(){
				cout<<" enter the value of y";
				cin>>y;
			}
		a  operator /(a t) {
			a    demo;
			demo.c=x*t.y;
			return demo;
		}
};
main(){
	a obj1,obj2,obj3;
	obj1.getata();
	obj1.getdata1();
	
	obj3=obj1/obj2;
	cout<<obj2.c;
	
	cout<<obj3.c;
}
