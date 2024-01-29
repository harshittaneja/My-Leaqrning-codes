#include<iostream>

using namespace std;
class test {
	public:
		int x,y;
	public:
		get(){
		
			cout<<" \n enter the value of x & y:";
			cin>>x>>y;
		}
		
	int operator++( ){
			x--;
			y--;
			
	
	
		}
		display(){
			cout<<"\n  value of x & y before increment:";
			cout<<x<<" "<<y;
		}
		display2(){
			cout<<"\n  value of after decrement:"<<x<<" "<<y;
		}
};
main(){

	test obj;
	obj.get();
	obj.display();
	++obj;
	obj.display2();
	
}
