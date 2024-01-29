#include<iostream>
using namespace std;
main(){
	float x,y,z;
	cout<<"enter the value of x and y and z";
	cin>>x>>y>>z;
	try{
		if((y-z)==0){
			throw"divide by zero attented";
		}
		else{
			cout<<x/(y-z);
		}
	}
	catch(const char*e){
		//note throw can access only char value not type int * e
		cout<<e;
		cout<<"\n try again";
	}
}
