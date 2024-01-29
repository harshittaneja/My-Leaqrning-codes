#include<iostream>
using namespace std;
class A1{
	protected:
		int a1;
		
};
class A2: public virtual A1{
	protected:
		int a2;
		
};
class A3:public virtual A2{
	protected:
		int a3;
		
};
class A4:public A3{
		int a4;
		public:
			void get(){
				cout<<" enter the value a1 ,a2 ,a3 ,a4"<<endl;
				cin>>a1>>a2>>a3>>a4;
			}
			void put(){
				cout<<" a1 ="<<a1<<" a2 ="<<a2<<" a3 ="<<a3<<" a4 ="<<a4;
			}
};
main (){
	A4 obj;
	obj.get();
	obj.put();
}
