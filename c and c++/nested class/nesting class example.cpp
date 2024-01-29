#include<iostream>
using namespace std;
//nesting of class code class inisde a class
class a{
	public:
	class 	b{
		public:
		int p;
		get(){
			cout<<" enter the value of p:";
			cin>>p;
		}
		};
		//c is inheriting b so question is how to acess b
		class c:public b{
			public:
		int q;
		
		show(){
			cout<<" enter the the value of q:";
		cin>>q;
			cout<<" sum"<<p+q;
			
		}
		};
		public:
	mul(){
		int x,y;
		cout<<" \n enter the x and y:";
		cin>>x>>y;
		cout<<" product"<<x+y;
	}
	};
	main(){
		//syntax to acess b class by using a class
		a::c  obj1;
		obj1.get();
		obj1.show();
		a obj;
		obj.mul();
	}
	
