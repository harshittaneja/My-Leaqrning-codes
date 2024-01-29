#include<iostream>
using namespace std;
class a{
	public:
		int x,y;
		//default constructor//
		a(){
			x=10;
			y=20;
		}
		//paramertise constructor//
		a(a &obj){
			x=obj.x;
		
			
		}
		
};
main(){
	a obj;
	cout<<"obj.x :"<<obj.x;
	//creating object obj1
	a obj1(obj);
	//putting refernece value 
	
	cout<<"	//creating object obj1 \n a obj1 \n //putting refernece value  \n obj1=obj";
	cout<<"\n obj1.x :"<<obj1.x;
}
