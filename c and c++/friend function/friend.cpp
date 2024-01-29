#include<iostream>
using namespace std;
class a{
	private:
		int x;
		public:
			void get(){
				cout<<"enter the value of x:";
				cin>>x;}
			friend  int display(a obj);	
			
			
};
display(a obj){//object value copy from obj1 to obj
 a obj;
				cout<<"no:"<<obj.x;
			}
			main(){
				a obj1;
				obj1.get();
				display(obj1);
			}
