#include<iostream>
using namespace std;
class A{
	public:
		int x;
		void get(){
			cout<<" #include<iostream>\nusing namespace std;\nclass A{\npublic:\nint x;\nvoid get(){\ncout<<'enter the value of x:';'\ncin>>x;\n}\n};\nclass B : public A {\npublic:\nvoid show(){\ncout<<'x is='<<x;\n}\n};\nmain(){\nB \nobj;\nobj.get()\nobj.show();\n}  ";                            
			//simple ,mutipile,hirerical
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
		cout<<"\n\n\n input as shown in above code now try it work";
			cout<<"\n\n enter the value of x:";
			cin>>x;
		}
	
};
class B : public A {
	public:
		void show(){
			cout<<" x is ="<<x;
		}
};
main(){
	system("COLOR 2A");
	B obj;
	obj.get();
	obj.show();
	
}
