#include<iostream>
using namespace std;
class a{
	public:
	
		int cube(int x){
			cout<<" enter the integer value:";
			cin>>x;
			cout<<"\n value of x is:"<<x*x*x;
		}
		int cube(float x){
			cout<<" enter the cube of float number";
			cin>>x;
			cout<<"value ofcube of  x:"<<x*x*x;
		}
		
		
};
main(){
	int x;
	float y;
	a obj;
	obj.cube(x);
	obj.cube( y);

}
