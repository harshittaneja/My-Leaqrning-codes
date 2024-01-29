#include<iostream>
using namespace std;
class vehicle{
	public:
		vehicle(){
			cout<<"this is a vehicle"<<endl;
		}
};
class Fare:public vehicle{
	public:
		Fare(){
			cout<<" Fare of vehicle"<<endl;
		}
		
};
class car:public vehicle{
	
};
class bus:public vehicle, public Fare{
	
};
main (){
	
	bus obj1;
}
