#include<iostream>
using namespace std;

class vehicle{
	public:
		vehicals(){
			cout<<" this is a vehicle"<<endl;
			
		}
};
class car:public vehicle{
	
};
 main(){
	car obj;
}
