#include<iostream>
using namespace std;
class base{
	private:
	int x;
	public:
	void get(){
		cin>>x;
	}
	
};//in this initially is protected but inherited publically so it  able to accesss inside the derived class 
class derived:public base{
	public:
		show(){
		
		cout<<x;
	}
		int y;
};
main(){
	derived ob;
	ob.get();
	ob.show();

}
