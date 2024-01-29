#include<iostream>
using namespace std;
class myclass{
	public:
		//constructor
		myclass(){
			cout<<"In constructor"<<endl;
			
		}
		//destructor
		~myclass(){
			cout<<"In destructor"<<endl;
		}
};
main(){
	myclass *obj= new myclass();
	delete obj;
	
}
