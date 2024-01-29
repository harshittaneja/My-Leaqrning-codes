#include<iostream>
using namespace std;
class abc{
	int num1, num2;
	public:
		void getdata(){
			cout<<"enter frist number:";
			cin>>num1;
			cout<<"enter the second number:";
			cin>>num2;
			
		}
		
		void sum(abc t){
			//acessing value ob.x like 
			cout<<t.num1+t.num2;
		}
};
main(){
	abc obj ,ob1;
	obj.getdata();
	//passing object as parameter to call the function 
	ob1.sum(obj);
}
