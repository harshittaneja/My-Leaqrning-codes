#include<iostream>
#include<stdexcept>
using namespace std;
main(){
	int x,y,z;
	cout<<" enter the value of x and y and z :";
	cin>>x>>y>>z;
	try{
		if((y-z)==0){
			throw runtime_error(" please enter the right input");
		}
		else
		cout<<x/(y-z);
	}
	catch(runtime_error e){
		cout<<e.what();
	}
	catch(...){
		cout<<" nice try";
	}
}

