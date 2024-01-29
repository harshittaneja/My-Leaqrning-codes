#include<iostream>
using namespace std;
class demo{
	public:
		int x;
	public:
		get(){
		
			cout<<" enter the value of x:"<<endl;
			cin>>x;
		}
		
	demo operator*(demo d){
			demo temp;
			temp.x=x/d.x;
			return temp;
			
	
	
		}
		display(){
			cout<<x<<endl;
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
