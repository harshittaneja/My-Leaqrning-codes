#include<iostream>
using namespace std;
	class harshit{
	private:
		int marks;
		char name[20];
		char rollno[20];
		public:
  void display(){
  	cout<<"enter your name:";
  	cin>>name;
  	
  }
  	
  void show(){
  	cout<<"your name is :"<<name;
  	cout<<"\n your marks:"<<marks;
  }
  
		
};
main()
{
	harshit s1;
	s1.display();
	s1.show();
}
