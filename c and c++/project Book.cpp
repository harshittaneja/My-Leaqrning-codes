#include<iostream>
#include<stdlib.h>
using namespace std;
main(){
	system("COLOR 10");
	int n,r,x,y,s,t,p,q,m,rollno1,rollno2,mul,sum,e,z,a,b;
	char c,arr1[12],arr2[12];
	 string har;
	label: cout<<endl<<endl<<endl<<endl;
	cout<<"\t\t\t\t\t\t";
	cout<<"*********************************************"<<endl;
	cout<<"\t\t\t\t\t\t\t";
	cout<<"C++ PROGRAMMING LANGUAGE"<<endl;
	cout<<"\t\t\t\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t\t\t\t";
	cout<<"Topics:"<<endl;
	cout<<"\t\t\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t\t\t";
	cout<<"    1. Classes and Objects"<<endl;
	cout<<"\t\t\t\t\t\t\t";
	cout<<"    2. Constructor and Destructor"<<endl;
	cout<<"\t\t\t\t\t\t\t";
	cout<<"    3. Types of Inheritance"<<endl;
	cout<<"\t\t\t\t\t\t\t";
	cout<<"    4. Polymorphism"<<endl;
	cout<<"\t\t\t\t\t\t\t";
	cout<<"    5. Exception Handling"<<endl;
	cout<<"\t\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t\t";
	cout<<"***********************************************";
	cout<<"\n\n\nEnter your choice:";
	cin>>s;
	system("cls");
	switch(s){
	hen:case 1:system("COLOR 20");
		cout<<"\t\t\t\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t\t\t\t";
	cout<<"Topics:"<<endl;
	cout<<"\t\t\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t\t\t";
	cout<<"  "<<endl;
	cout<<"\t\t\t\t\t\t\t";
	cout<<" 1.Inline Functions"<<endl;
	cout<<"\t\t\t\t\t\t\t";
	cout<<" 2.Static Data Members and Member Function"<<endl;
	cout<<"\t\t\t\t\t\t\t";
	cout<<" 3.Friend Function"<<endl;
	cout<<"\t\t\t\t\t\t\t";
	cout<<" 4.Returning object from function\n\n"<<endl;
	cout<<"\t\t\t\t\t\t\t";
	cout<<"Enter your choice:";
	cin>>t;
	system("cls");
	switch(t){
	case 1:system("COLOR 30");
	cout<<"#include<iostream>\n#define x 7\n#define y 9\nusing namespace std;\nclass A{\npublic:\n//	int x,y;\nint display(int,int);\n};\ninline int A::display(int a,int b){\ncout<<''Sum:''<<a+b;\n}\nmain(){\nA ob;\nob.display(x,y);\n}";
	x=7,y=9;
	cout<<"\n\n\nSum:"<<x+y;
    break;
	case 2:system("COLOR 4D");
	cout<<"#include <iostream>\nusing namespace std;\nclass Demo\n{\nprivate:\nstatic int X;\npublic:\nstatic void fun()\n{\ncout<<''Value of X:'' << X << endl;\n}\n};\nint Demo :: X =10;\nmain()\n{\nDemo X;\nX.fun();\n}";
	x=10;
	cout<<"\n\n\nValue of X:"<<x;
	break;
	case 3:system("COLOR 50");
	cout<<"#include<iostream>\nusing namespace std;\nclass A\n{\nint x;\npublic:\nvoid get()\n{\ncout<<''Enter the value:'';\ncin>>x;\n}\nfriend void display(A);\n};\nvoid display(A obj)\n{\ncout<<''Value:''<<obj.x;\n}\nmain()\n{\nA obj,obj1;\nobj.get();\ndisplay(obj);\n}";
	cout<<"\n\n\nEnter the value:";
	cin>>x;
	cout<<"Value:"<<x;
	break;
	case 4:system("COLOR 60");
	cout<<"#include <iostream>\nusing namespace std;\nclass Student {\npublic:\nint stuId;\nint stuAge;\nstring stuName;\nStudent input(int n, int a, string s){\nStudent obj;\nobj.stuId = n;\nobj.stuAge = a;\nobj.stuName = s;\nreturn obj;\n}\nvoid disp(Student k){\ncout<<''Name: ''<<k.stuName<<endl;\ncout<<''Id: ''<<k.stuId<<endl;\ncout<<''Age: ''<<k.stuAge<<endl;\n}\n};\nmain(){\nStudent s;\ns = s.input(1001, 29, ''Negan'');\ns.disp(s);\n}";
	cout<<"\n\n\nName:Negan\nID:1001\nAge:29";
	break;
	default:goto hen;
	break;
}
    break;
	case 2:system("COLOR 20");
		cout<<"\t\t\t\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t\t\t\t";
	label4:cout<<"Topic:"<<endl;
	cout<<"\t\t\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t\t\t";
	cout<<"  "<<endl;
	cout<<"\t\t\t\t\t\t\t";
	cout<<" 1.Constructor"<<endl;
	cout<<"\t\t\t\t\t\t\t";
	cout<<" 2.Destructor\n\n"<<endl;
	cout<<"\t\t\t\t\t\t\t";
	cout<<"Enter your choice:";
	cin>>r;
	system("cls");
	
	label3:cout<<"\t\t\t\t\t\tPress a number\n\n1.Default Constructor\n2.Parameterized Constructor\n3.Copy Constructor";
	if(r==2){
		system("cls");
	}
	else{
		system("cls");
	}
	switch(r){
	case 1:cout<<"\n\nEnter your choice:";
	cin>>n;
	system("cls");
	switch(n)
	{
	case 1:system("COLOR 80");
	cout<<"class A{\npublic:\nint x,y;\nA(){\ncout<<''Enter the values:'';\ncin>>x>>y;\ncout<<''Sum:''<<x+y;\n}\n};\nmain(){\nA obj;\n}";
	cout<<"\n\nEnter the values:";
	cin>>x>>y;
	cout<<"Sum:"<<x+y;
	break;
	case 2:system("COLOR 90");
	cout<<"class A{\npublic:\nint x,y;\nA(){\nx=0;\ny=0;\n}\nA(int a,int b){\nx=a;\ny=b;\n}\nvoid show(){\ncout<<''Sum:''<<x+y;\n}\n};\nmain(){\nA obj;\nA obj1(10,12);\nobj1.show();\n}";	
	x=10,y=12;
	cout<<"\n\nSum:"<<x+y;
	break;
	case 3:system("COLOR 10");
	cout<<"class A{\npublic:\nint x,y;\nA(){\nx=0;\ny=0;\n}\nA(int a,int b){\nx=a;\ny=b;\n}\nA(A &d){\nx=d.x;\ny=d.y;\n}\nvoid show(){\ncout<<''Sum''<<x+y;\n}\n};\nmain(){\nA obj;\nA obj1(10,12);\nA obj2=obj1;\nobj2.show();\n}";
	x=10,y=12;
	cout<<"\n\nSum:"<<x+y;
	break;
	default:goto label3;
	break;
	}
	break;
	case 2:system("COLOR 20");
	cout<<"#include<iostream>\nusing namespace std;\nclass A{\npublic:\nint x,y;\nA(){\ncout<<''Enter the values:'';\ncin>>x>>y;\ncout<<''Sum:''<<x+y;\n}\n~A(){\ncout<<''Destroy'';\n}\n};\nmain(){\nA obj;\n}";
	cout<<"\n\nEnter the values:";
	cin>>x>>y;
	cout<<"\nSum:"<<x+y;
	cout<<"\nDestroy";
	break;
	default:goto label4;
	break;
}
    break;
    case 3:system("COLOR 40");
    	cout<<"\t\t\t\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t\t\t\t";
	label5:cout<<"Topics:"<<endl;
	cout<<"\t\t\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t\t\t";
	cout<<"  "<<endl;
	cout<<"\t\t\t\t\t\t\t";
	cout<<" 1.Simple Inheritance"<<endl;
	cout<<"\t\t\t\t\t\t\t";
	cout<<" 2.Hierarichal Inheritance"<<endl;
	cout<<"\t\t\t\t\t\t\t";
	cout<<" 3.Multiple Inheritance"<<endl;
	cout<<"\t\t\t\t\t\t\t";
	cout<<" 4.Hybrid Inheritance"<<endl;
	cout<<"\t\t\t\t\t\t\t";
	cout<<" 5.Multilevel Inheritance\n\n"<<endl;
	cout<<"\t\t\t\t\t\t\t";
	cout<<"Enter your choice:";
	cin>>m;
	system("cls");
	switch(m){
		case  1:system("COLOR 40");cout<<" ____simple___ inheritance__:\n\n\nprogram:-";
			cout<<" #include<iostream>\nusing namespace std;\nclass A{\npublic:\nint x;\nvoid get(){\ncout<<'enter the value of x:';'\ncin>>x;\n}\n};\nclass B : public A {\npublic:\nvoid show(){\ncout<<'x is='<<x;\n}\n};\nmain(){\nB \nobj;\nobj.get()\nobj.show();\n}  ";                            			
		cout<<"press 1 for clear screen:";
		cin>>c;
		if(c=='1'){
		system ("cls");
					cout<<"\n\n\n input as shown in above code now try it work";
			cout<<"\n\n enter the value of x:";
			cin>>x;
		cout<<" x is ="<<x;
	}
		else
				cout<<"\n\n enter the value of x:";
			cin>>x;
		cout<<" x is ="<<x;
		break;
	case 2:system("COLOR 50");
cout<<"______________hierarichal inheritance"<<"\nprogram:-";
cout<<"\n#include<iostream>\n#include<string.h>\nusing namespace std;\nclass  a{\nprotected:\nchar name[50];\nchar  rollno[21];\n};\nclass b: public a{\npublic:\nchar section='x' ;\nvoid getdata(){\ncout<<' enter the name:';\ngets(name);\ncout<<' enter the roll no:';\ngets(rollno);\n}\nvoid showdata(){\ncout<<name;\ncout<<'\n' <<rollno;\ncout<<'\n'<<section;\n}\n};\nclass c: public a{\npublic:\nchar section='y'; \nvoid getdata(){\ncout<<'' enter the name:'';\ngets(name);\ncout<<'' enter the roll no:'';\ngets(rollno);\n}\nvoid showdata(){\ncout<<name;\ncout<<''\n ''<<rollno;\ncout<<'\n''<<section;\n}\n};\nmain(){\nb obj;\nc  obj1;\nobj.getdata();\nobj.showdata();\nobj1.getdata();\nobj1.showdata();\n}";
cout<<" enter the choice for clear screen by press 1";
cin>>c;
if(c=='1'){
system("cls");
fflush(stdin);
cout<<"\n\nenter the name: ";
gets(arr1);
fflush(stdin);
cout<<"enter the rollno:";
cin>>rollno1;
fflush(stdin);
cout<<arr1<<"  "<<rollno1<<"  "<<"x";
cout<<"enter the name:";
gets(arr2);
cout<<" enter the roll no:";
cin>>rollno2;
cout<<arr2<<" "<<rollno2<<"  "<<"y";
}
else{
	fflush(stdin);
cout<<"\n\nenter the name: ";
gets(arr1);
fflush(stdin);
cout<<"\nenter the rollno:";
cin>>rollno1;
fflush(stdin);
cout<<arr1<<"  "<<rollno1<<"  "<<"x";
cout<<"\nenter the name:";
gets(arr2);
cout<<" \nenter the roll no:";
cin>>rollno2;
cout<<arr2<<" "<<rollno2<<"  "<<"y";
}
		break;
		case 3:system("COLOR 60");
			system("cls");
				cout<<"mulitple inheritance:\n\n\nprogram:-";
			cout<<" \n#include<iostream>\nusing namespace std;\nclass a{\nprotected:\nint x,y,mul,sum;\npublic:\nvoid getdata(){\ncout<<'' enter the number :'';\ncin>>x>>y;\n}\n};\nclass b :   virtual public  a{\nprotected:\nint  mul;\npublic:\nvoid disp(){\nmul=x*y;\nsum=x+y;\ncout<<sum;\n}\n};\nclass c: virtual  public a{\npublic:\nvoid show(){\ncout<<'\n';\ncout<<mul;\n}\n};\nclass d:public b,public c{\nvoid fly(){\ncout<<'' cute'';\n}\n};\nmain(){\nd obj;\nobj.getdata();\nobj.disp();\nobj.show();\n}	";
			cout<<"press 1 for clear the screen:";
			cin>>c;
			if(c=='1'){			
			system("cls");
			cout<<"\n\n\n input code is shown try it working now";
			cout<<"\n enter the number :";
			cin>>x>>y;
				mul=x*y;
				sum=x+y;
				cout<<"sum of x and y"<<sum;
				cout<<"\n";
			cout<<" multiplication of x and y"<<mul;
		}
		else{
			cout<<"multiple inheritance:\n\n\nprogram:-";
			cout<<" \n#include<iostream>\nusing namespace std;\nclass a{\nprotected:\nint x,y,mul,sum;\npublic:\nvoid getdata(){\ncout<<'' enter the number :'';\ncin>>x>>y;\n}\n};\nclass b :   virtual public  a{\nprotected:\nint  mul;\npublic:\nvoid disp(){\nmul=x*y;\nsum=x+y;\ncout<<sum;\n}\n};\nclass c: virtual  public a{\npublic:\nvoid show(){\ncout<<'\n';\ncout<<mul;\n}\n};\nclass d:public b,public c{\nvoid fly(){\ncout<<'' cute'';\n}\n};\nmain(){\nd obj;\nobj.getdata();\nobj.disp();\nobj.show();\n}	"<<endl;
			cout<<"\n\npress 1 for clear the screen:";
			cin>>c;
			if(c=='1'){
			system("cls");
			cout<<"\n input code is shown try it working now";
			cout<<"\n\nenter the two numbers(x and y) for sum and multiplication:";
			cin>>x>>y;
				mul=x*y;
				sum=x+y;
				cout<<sum;
				cout<<"\n";
			cout<<mul;
		}
		else
			cout<<"\n\n\n input code is shown try it working now";
			cout<<" enter the two numbers(x and y) for sum and multiplication:";
			cin>>x>>y;
				mul=x*y;
				sum=x+y;
				cout<<sum;
				cout<<"\n";
			cout<<mul;
		
	}
break;		
case 4:system("COLOR 70");
	cout<<" \n\n \n ______hybrid inheritance ";
	cout<<"\n#include<iostream>\nusing namespace std;\nclass a{\npublic:\nint x,y;\n};\nclass b:  virtual public a{\npublic:\nget(){\ncout<<'enter the value of x and y numbers';\ncin>>x>>y;\n}; \nclass c: virtual public a{\npublic:\nint p ,q;\nget1(){\ncout<<' enter the value of p and q:';\ncin>>p>>q;\n}\n};\nclass d:public b,public c{\npblic:\nshow(){\n	cout<<' multiplication  of first and second entry :'<<x*p<<" "<<y*q;\n}\nmain(){\nd obj;\nobj.get();\nobj.get1();\n}\n}\n}";
  cout<<" for clear the above code press 1 from keyboard:";
  cin>>c;
  if(c=='1'){
  system("cls");
  cout<<"\n\n try code to check   working of above code";
  cout<<" \n enter the values x and y";
  cin>>x>>y;
  cout<<" enter the value p and q :";
  cin>>p>>q;
  cout<<" \n multiplication of first and second entry is:"<<x*p<<"    "<<y*q ;
}
else{
	cout<<"\n\n try code to check   working of above code";
  cout<<" \n enter the values x and y";
  cin>>x>>y;
  cout<<" enter the value p and q :";
  cin>>p>>q;
  cout<<" \n multiplication of first and second entry is:"<<x*p<<"    "<<y*q ;
}
break;
 case  5:system("COLOR 80");
	cout<<"____multilevel inheritance____";
	cout<<"\n#include<iostream>\nusing namespace std;\nclass a {\npublic:\nchar arr[12];\nget(){\n\ncout<<' enter your name  :';\n}\n};\nclass b:public a{\npublic:\nshow(){\ngets(arr);\n}\n};\nclass c: public b{\npublic:\nshow1(){\ncout<<'your name is:'<<arr;\n}\n};\nmain(){\nc obj;\nobj.get();\nobj.show();\nobj.show1();\n}";
	cout<<" press 1 for clear the above code ";
	cin>>c;
	if(c=='1'){
		system("cls");
		cout<<"enter the name:";
		cin>>har;
		gets(arr1);
		cout<<"\n\n\n you name is :"<<har;
	}
	else{
		cout<<"enter the name:";
		cin>>har;
		cout<<"\n\n\n you name is :"<<har;
}
	break;
	default:goto label5;
	break;
}
    break;
	case 4:system("COLOR 90");
	label1:cout<<"\nPress a number\n\n1.Function Overloading\n2.Constructor Overloading\n3.Operator Overloading";
    cout<<"\n\n\nEnter your choice:";
    cin>>p;
    system("cls");
    switch(p){
    	case 1:system("COLOR 10");
		cout<<"#include<iostream>\nusing namespace std;\nclass A{\npublic:\nA(int a,int b){\ncout<<''Multiplication of two numbers:''<<a*b<<endl<<''Sum of squares of two numbers:''<<a*a+b*b;\n}\nA(int s){\ncout<<''Cube of a number:''<<s*s*s;\n}\n};\nmain(){\nA obj;\nint x,y;\ncout<<''Enter the value of two numbers:'';\ncin>>x>>y;\nA obj1(x,y);\ncout<<''\nEnter the value:'';\ncin>>x;\nA obj3(x);\n}";
    	cout<<"\n\n\nEnter the value of two numbers:";
    	cin>>x>>y;
    	cout<<"Multiplication of two numbers:"<<x*y<<endl<<"Sum of squares of two numbers:"<<x*x+y*y;
    	cout<<"\nEnter the value:";
    	cin>>x;
    	cout<<"Cube of a number:"<<x*x*x;
		break;
    	case 2:system("COLOR 20");
		cout<<"#include<iostream>\nusing namespace std;\nclass construct\n{\npublic:\nfloat area;\nconstruct()\n{\narea = 0;\n}\nconstruct(int a, int b)\n{\narea = a * b;\n}\nvoid disp()\n{\ncout<<''Area:''<<area<< endl;\n}\n};\nmain()\n{\nconstruct o;\nconstruct o2( 10, 20);\no.disp();\no2.disp();\n}";
    	cout<<"\n\n\nArea=0\nArea=200";
		break;
		case 3:system("COLOR 30");
		label2:cout<<"\nPress a number\n\n1.Unary Operator Overloading\n2.Binary Operator Overloading";
		cout<<"\n\n\nEnter your choice:";
		cin>>q;
		system("cls");
		switch(q){
			case 1:system("COLOR 40");
			cout<<"#include<iostream>\nusing namespace std;\nclass test{\nint a,b,c;\npublic:\nvoid getdata(int, int , int );\nvoid operator -();\nvoid disp();\n};\nvoid test::getdata(int x,int y,int z)\n{\na=x;\nb=y;\nc=z;\n} \nvoid test::operator -()\n{\na=-a;\nb=-b;\nc=-c;\n}\nvoid test::disp()\n{\ncout<<a<<" "<<b<<" "<<c<<endl;\n}\nmain()\n{\ntest obj;\nobj.getdata(-10,12,13);\nobj.disp();\10n-obj;\nobj.disp();\n}";
			cout<<"-10 12 13\n10 -12 -13";
			break;
			case 2:system("COLOR 50");
			cout<<"#include<iostream>\nusing namespace std;\nclass test{\nint a,b;\npublic:\ntest()\n{\na=0;\nb=0;\n}\ntest(int x,int y)\n{\na=x;\nb=y;\n}\nvoid operator +(test t1){\na+=t1.a;\nb+=t1.b;\n}\nvoid disp()\n{\ncout<<a<<" "<<b<<endl;\n}\n};\nmain()\n{\ntest ob1,ob2,ob3;\nob1=test(100,150);\nob1.disp();\nob2=test(20,60);\nob2.disp();\nob2+ob1;\nob2.disp();\n}";
			cout<<"100 150\n20 60\n120 210";
			break;
			default:goto label2;
			break;
		}
		break;
		default:goto label1;
		break;
	}
	break;
	case 5:system("COLOR 10");
		cout<<"\t\t\t\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t\t\t\t";
	label6:cout<<"Topics:"<<endl;
	cout<<"\t\t\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t\t\t";
	cout<<"  "<<endl;
	cout<<"\t\t\t\t\t\t\t";
	cout<<" 1.Throwing and catching an exception"<<endl;
	cout<<"\t\t\t\t\t\t\t";
	cout<<" 2.User Defined Exception"<<endl;
	cout<<"\t\t\t\t\t\t\t";
	cout<<"Enter your choice:";
	cin>>e;
	system("cls");
	switch(e){
		case 1:system("COLOR 70");
		cout<<"\n#include<iostream>\nusing namespace std;\nmain(){\nfloat x,y,z;\ncout<<'enter the value of x and y and z';\ncin>>x>>y>>z;\ntry{\nif((y-z)==0){\nthrow'divide by zero attented';\n}\nelse{\ncout<<x/(y-z);\n}\n}\ncatch(const char*e\ncout<<e;\ncout<<'\n try again';\n}\n}";
	cout<<"\n\ncheck working of above code if you want to clear the press 1:";
	cin>>c;
	if(c=='1'){
	system("cls");
	cout<<"\n\nEnter the value of x and y and z:";
	cin>>x>>y>>z;
	try{
		if((y-z)==0){
			throw"divide by zero attented";
		}
		else{
			cout<<x/(y-z);
		}
	}
	catch(const char*e){
		cout<<e;
		cout<<"\n try again";
	}
}
else{	
	cout<<"\n\nEnter the value of x and y and z:";
	cin>>x>>y>>z;
	try{
		if((y-z)==0){
			throw"divide by zero attented";
		}
		else{
			cout<<x/(y-z);
		}
	}
	catch(const char*e){
		cout<<e;
		cout<<"\n try again";
	cin>>x>>y>>z;
	try{
		if((y-z)==0){
			throw"divide by zero attented";
		}
		else{
			cout<<x/(y-z);
		}
	}
	catch(const char*e){
		cout<<e;
		cout<<"\n try again";
	}
}
}
    break;
	case 2 :system("COLOR 10");
	cout<<"\n#include<iostream>\n#include<exception>\nusing namespace std;\nclass harshit:public exception//exception class is pre defined in complirer; \n{\npublic:\nconst char*what() const throw(){\ncout<<' user defined';\n}\n};\nmain(){\nint a,b;\ncout<<'enter the value of  a and b';\ncin>>a>>b;\ntry{\nif(b==0){\nharshit  z;\nthrow z;\n}\nelse{\ncout<<a/b;\n}\n}\ncatch(harshit z){\n}\n}\n}";
cout<<"\nEnter the value of  a and b:";
	cin>>a>>b;
		if(b==0){
			cout<<"user defined";
			
		}
		else{
			cout<<a/b;
		}
    break;
    default:goto label6;
    break;
}
    break;
	default:goto label;
	break;
}
}
