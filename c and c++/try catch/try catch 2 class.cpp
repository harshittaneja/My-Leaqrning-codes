//logic type exception
#include<iostream>
#include<stdexcept>
using namespace std;
class a{
	int x,y,z;
	public:
		//constructor is called
		a(){
			cout<<" enter the value of x and y and z ";
			cin>>x>>y>>z;
		}
		divide(){
			if((y-z)==0){
				//throwing logical exception 
				throw  logic_error(" no no");
				
			}
			else{
				cout<<x/(y-z);
				cout<<" sidhant";
			}
		}
};
main(){
	//creating object of class
	a obj;
	try{
		
	obj.divide();
}
catch(logic_error e){
	//e.what() function will print the string that passed in throw statement
	cout<<e.what();
}
catch(int x){
	cout<<"text";
}
//this is like catch anytype of exception if no same type catch if caught anyone 
//ye to chalega agar koi bhi na challa to
catch(...){
	cout<<"hm";
}
	
}
