#include<iostream>
using namespace std;
int main(){
	try{
		try{
			throw 20;
		}
		catch( int i){
			cout<<"handle partially";
			throw;
		}
	}
	catch(int n){
		cout<<"\n handle remaining";
	}
	return 0;
}
