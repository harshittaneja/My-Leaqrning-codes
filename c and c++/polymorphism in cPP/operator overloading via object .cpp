#include<iostream>
using namespace std;
  class   demo{
	public:
		int i,z,n;
		get(){
			cout<<" enter the number X and y:";
			cin>>n;
		}
		demo operator &(demo d){
			demo temp;
			temp.z=0;
			for(i=1;i<=n;i++){
			temp.i=i*i;
			
			temp.z=temp.z+temp.i;
		}
			return temp;
	

}


	
		display(){
			cout<<" sum of product is:"<<z;
		}
	
};
main(){
	demo obj,obj1,obj2;
	obj.get();
	obj1=obj&obj2;
	obj1.display();
}
