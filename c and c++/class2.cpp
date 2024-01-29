#include<iostream>
using namespace std;
class student{
	public:
	char name[20];
	char phone[20];
	void display(){
		cout<<"enter your name:";
		cin>>name;
		cout<<"\n enter yuor ph number:";
		cin>>phone;
		
		
	}
	void show(){
		cout<<"your name is:"<<name;
		cout<<"\n"<<phone;
	}
};
main(){
	student s1;
	s1.display();
	s1.show();
}
