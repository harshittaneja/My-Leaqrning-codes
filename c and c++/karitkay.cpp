#include<iostream>
#include<stdexcept>
using namespace std;
main(){
	int a,b,c;
	cout<<" enter the a and b and c";
	cin>>a>>b>>c;
	try{
		if(b==0){
		throw 10.2f;
		}
		else{
			cout<<a*b*c;
		}
	}
	catch(const char *e){
		cout<<e;
	}
	catch(int x){
		cout<<"kartikay";
	}
	catch(...){
		cout<<"harshit";
	}
}
