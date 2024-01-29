#include<iostream>
using namespace std;
class abc{
	private:
		int x;
		public :void get(){
			cout<<"enter the number:";
			cin>>x;
		}
		//here by default display function i private but it is friend so it called outsie the class
		friend int display(abc);
};
int display(abc obj){
	cout<<obj.x;
	
}
main(){
	abc obj;
	obj.get();
	display(obj);
}
