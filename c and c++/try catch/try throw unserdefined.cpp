#include<iostream>
#include<exception>
using namespace std;
//custom class harshit inherited the exception calls prebuilt class present in exception header file
class harshit:public exception//exception class is pre defined in complirer; 
{
	public:
		const char*what() const throw(){
			cout<<" user defined Exception occur";
		}
};
main(){
	int a,b;
	cout<<"enter the value of  a and b";
	cin>>a>>b;
	try{
		if(b==0){
			//object is created
			harshit  z;
			//object will through as exception
			throw z;
		}
		else{
			cout<<a/b;
		}
		
	}
	//object will catch as exception if occur
	catch(harshit z){
	//if exception is caught then call the what function inside the class harshit
		z.what();
	}
	
}
