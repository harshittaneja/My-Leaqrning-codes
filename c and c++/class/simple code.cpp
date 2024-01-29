#include<iostream>
using namespace std;
class demo{
	public:
		int x=10,y;
		get(){
			int x,y;
			cin>>x>>y;
		}
		
};
main(){
	demo obj;
	obj.get();
	cout<<obj.x;
}
