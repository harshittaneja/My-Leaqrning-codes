#include<iostream>
#include<stdexcept>
using namespace std;
class a{
	int x,y,z;
	public:
		a(){
			cout<<" enter the value of x and y and z ";
			cin>>x>>y>>z;
		}
		divide(){
			if((y-z)==0){
				throw  15.2f;
				
			}
			else{
				cout<<x/(y-z);
				cout<<" sidhant";
			}
		}
};
main(){
	a obj;
	try{
	obj.divide();
}
catch(logic_error e){
	cout<<e.what();
}
catch(int x){
	cout<<"text";
}
catch(...){
	cout<<"hm";
}
	
}
