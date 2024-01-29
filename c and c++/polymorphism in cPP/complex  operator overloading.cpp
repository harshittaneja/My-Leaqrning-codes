#include<iostream>
using namespace std;
class abc{
	public:
		int a,b;
		void get(){
			cout<<" enter the real part:";
			cin>>a;
			cout<<" enter the imaginary part :";
			cin>>b;
			
		}
		void show(){
			if(b>0){
			cout<<a<<" +"<<b<<"i";
		}
		else {
			cout<<a<<" "<<b<<"i";
		}
	}
		 abc operator +(abc temp){
		 	abc temp1;
		 	temp1.a=a+temp.a;
		 	temp1.b=b+temp.b;
			 return temp1;
		 }
	

		
};
main(){
	abc obj1,obj2,obj3;
	obj1.get();
	obj2.get();
		obj3=obj1+obj2;
	obj3.show();

}
