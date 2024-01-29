#include<iostream>
using namespace std;
class demo{
	public:
		int x,y;
		get(){
			int x,y;
			cout<<" enter the global variables:";
			cin>>this->x>>this->y;
			cout<<"\n enter the local vatrsiable: ";
			cin>>x>>y;
			cout<<"mul="<<this->x*x<<"  "<<this->y*y;
		}
		
};
main(){
	demo obj;
	obj.get();
}
