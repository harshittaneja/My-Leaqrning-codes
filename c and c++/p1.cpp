#include<iostream>
using namespace std;

class vehicle{
	public:
		vehicle(){
			cout<<" this is a vehicle"<<endl;
			
		}
};
class fourwheleer : public vehicle{
	public:
		fourwheleer(){
			cout<<"objects with four wheels are vehicles"<<endl;
			
		}
};
class car:public vehicle{
	
	public:
		car(){
			cout<<" car has four wheeles"<<endl;
		}
};
 main(){
	car obj;
}
