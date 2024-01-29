#include<iostream>
using namespace std;
class demo{
	public:
		int i,z;
		get(){
			cout<<" enter the number i:";
			cin>>i;
		}
		demo operator&(demo d){
			demo temp;
			//object.variable intilize to zero
			temp.z=0;
			for(i=1;i<10;i++){
			temp.i=i*i;
			temp.z=temp.z+temp.i;
			return temp;
		}
	}
		display(){
			cout<<" sum of product is:"<<z;
		}
	
};
main(){
	//three object are created
	demo obj,obj1,obj2;
	obj.get();
	//and opeartor requires two object to overload 
	//ob just used to call value passed is of obj2
	obj1=obj&obj2;
	obj1.display();
}
