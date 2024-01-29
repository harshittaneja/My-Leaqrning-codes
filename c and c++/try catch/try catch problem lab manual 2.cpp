#include<iostream>
using namespace std;
int main(){
	int x=-1;
	cout<<" before try";
	try{
		cout<<"\n inside try";
	if(x<0){
		throw x;
		cout<<" \n after throw(new executed)\n";
	}
	}
	catch(int x){
		cout<<"\n  exception caught\n";
	}
	cout<<" after catch ( will be exceuted)\n";
	return 0;
	
	
}
