#include<iostream>
using namespace std;
class abc{
	public:
		int x,y;
		void getdata(){
			cout<<" enter the first argument:";
			cin>>x;
			cout<<"\n enter the second argument:";
			cin>>y;
		}
		zerosmaller(){
			if(x>y)
			cout<<x<<" value is =1 "<<"  &"<< y << "value is :0 ";
			else
				
			cout<<x<<" value is =0 "<<"  &  "<<y<<" value is :1";
		}
		
		
};
main(){
	abc obj;
	obj.getdata();
	obj.zerosmaller();
}
