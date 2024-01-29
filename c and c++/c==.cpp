#include<iostream>
 using namespace std;
 struct student{
 	char name[20];
 	int marks;
 	char rollno[40];
 	int sum ();
 };
main()
{
struct student s1;
	cout<<"enter your name:";
	cin>>s1.name;
	s1.sum();
	int sum(){
		sum=23;
		cout<<sum;
	}
	cout<<"\n enter your roll number: ";
	cin>>s1.rollno;
	cout<<"\n enter you marks:";
	cin>>s1.marks;
	cout<<"\n your name is:"<<s1.name;
	cout<<"\n your roll  number is :"<<s1.rollno;
	cout<<"\n your marks is :"<<s1.marks;
}
