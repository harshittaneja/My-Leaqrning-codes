#include<iostream>
using namespace std;
class abc{
	public:
		int x,y,add;
		abc sum(int c,int d){
			abc obj;
			obj.x=c;
			obj.y=d;
			
			obj.add=c+d;
			return   obj;
		}
};
main(){
	abc obj;
	obj=obj.sum(5,6);
	cout<<obj.add;
}
