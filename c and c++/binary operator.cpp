#include<iostream>
using namespace std;
class demo{
	public:
		int x,y;
	public:
		get(){
		
			cout<<" enter the value of x&y:"<<endl;
			cin>>x>>y;
		}
		
	demo operator*(demo d){
			demo temp;
			temp.x=x/d.x;
			return temp;
			
	
	
		}
		display(){
			cout<<x<<endl<<y<<endl;
		}
};
main(){

	demo obj,obj1,obj2;
	obj.get();
	obj.display();
	obj1.get();
	obj1.display();
	obj2=obj*obj1;
	obj2.display();
}
