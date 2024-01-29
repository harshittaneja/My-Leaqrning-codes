#include<iostream>
using namespace std;
class demo{
public:
	int a,b,ptr;
	get(){
		cout<<"enter the value of a nad b:";
		cin>>a>>b;
	}
	show(){
		cout<<a<<b;
	}
};
main(){
	demo obj,*ob;
	ob =&obj;
	obj.get();//get value in obj object first
//	obj.show();
	ob->get();//get  different value at same address frist 11 and 12 but now 13 56 if taken this input
	obj.show();
	cout<<ob;//address is same but value is changes
}
