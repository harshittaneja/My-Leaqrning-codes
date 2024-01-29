#include<iostream>
#include<string.h>
using namespace std;
class  a{
	protected:
		char name[50];
		char  rollno[21];
		
};
class b: public a{
	public:
		char section='x' ;
		void getdata(){
			cout<<" enter the name:";
			gets(name);
			cout<<" enter the roll no:";
			gets(rollno);
		
			
			
		}
		void showdata(){
			cout<<name;
			cout<<"\n "<<rollno;
			cout<<"\n"<<section;
		}
		
};
class c: public a{
	public:
		char section='y'; 
		
			void getdata(){
			cout<<" enter the name:";
			gets(name);
			cout<<" enter the roll no:";
			gets(rollno);
		
			
			
		}
		void showdata(){
			cout<<name;
			cout<<"\n "<<rollno;
			cout<<"\n"<<section;
		}
		
};
main(){
	b obj;
	c  obj1;
	obj.getdata();
	obj.showdata();
	obj1.getdata();
	obj1.showdata();
}
