#include<iostream>
using namespace std;
class A{
	public:
		int marks[12],i,sum=0;
		
};
class B: virtual public A{
	public:
		get(){
			for(i=0;i<5;i++){
				cout<<"enter the marks in "<<i+1<<" subject : ";
				cin>>marks[i];
				sum=sum+marks[i];
			}
			
		}
};
class c: virtual public A{
	public:
		get1(){
			cout<<"Total is:"<<sum;
		}
};
class d:public c, public B{
	public:
		float percent;
		show(){
			percent=(float)sum*0.2;
		  cout<<"\n percentage is:"<<percent<<"%";
		}
		
};
main(){
	d obj;
	obj.get();
	obj.get1();
	obj.show();
}

	
