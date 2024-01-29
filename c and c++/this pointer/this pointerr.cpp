#include<iostream>
using namespace std;
class a{
	public:
		int x;
		void disp(){
			int x;
			cout<<" enter the global variable:";
			cin>>this->x;
			cout<<"enter the locl variable";
			cin>>x;
			cout<<x+this->x;
		}
};
main(){
	a obj;
	obj.disp();
	
}
