#include<iostream>
#include<stdlib.h>
using namespace std;
class a{
	public:
		int x,y,sum;
		get(){
			cout<<"enter the value of :";
			cin>>x>>y;
			sum =x+y;
		}
		disp(){
			cout<<"sum="<<sum;
		}
};
main(){
    a obj,*ptr;
    ptr = new a;
	ptr->get();
	ptr->disp();

}
