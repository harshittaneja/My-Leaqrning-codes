#include<iostream>
using namespace std;
int main(){
	try{
		throw 10;
	}
	catch(char *e){
		cout<<"caught"<<e;
	}
	catch(...){
		cout<<"default exception\n";
	}
	return 0;
}
