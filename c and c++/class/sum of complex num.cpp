#include<iostream>
using namespace std;
class   abc{
	int a;
	int b;
	int c;
	int d;
	public:
		void display(){
			cout<<"enter first number  real part:";
			cin>>a;
			cout<<"\nenter imaginary part of first number:";
			cin>>b;
			cout<<"enter second number real part :";
			cin>>c;
			cout<<"\n enter the imaginary part of second number:";
			cin>>d;
			
		}
		void showdata(){
			cout<<"frist number:"<<a<<"+ i"<<b;
			cout<<"\n second number :"<<c<<" + i"<<d;
			cout<<"\n sum of two complex number is:"<<a+c<<" + i"<<b+d;
		}
		
	
};
main(){
	abc s1;
	s1.display();
	s1.showdata();
}
