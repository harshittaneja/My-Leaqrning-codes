#include<iostream>
using namespace std;
class test{
	public:
		test(){
			cout<<"constructor of test"<<endl;
			
		}
		~test(){
			cout<<"destructor of test"<<endl;
		}
};
 int main(){
 	try{
 		throw 10;
	 }
	 catch(int i){
	 	cout<<"caught"<<i<<endl;
	 }
 }
