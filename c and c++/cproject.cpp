#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<typo/typo.h>
using namespace std;
main(){
	system("COLOR 3A");
	auto fontModel = Tg::BuildFont({ "MyFontFile.ttf", 60 });
	int n,x,y,mul,sum,p,q;
	 char c, arr1[12],arr2[12];
	 string har;
	int rollno1,rollno2;
	cout<<"\nenter the case:";
	cin>>n;
	switch(n){
		case  1:{
			system("COLOR 5A");
		cout<<" ____simple___ inheritance__:\n\n\nprogram:-";
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
			
		
	
	break;
	case 2:


cout<<"______________hierarichal inhreitance"<<"\nprogram:-";
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
else
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

		case 3:
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
				cout<<sum;
				cout<<"\n";
			cout<<mul;
		}
		else{
			cout<<"mulitple inheritance:\n\n\nprogram:-";
			cout<<" \n#include<iostream>\nusing namespace std;\nclass a{\nprotected:\nint x,y,mul,sum;\npublic:\nvoid getdata(){\ncout<<'' enter the number :'';\ncin>>x>>y;\n}\n};\nclass b :   virtual public  a{\nprotected:\nint  mul;\npublic:\nvoid disp(){\nmul=x*y;\nsum=x+y;\ncout<<sum;\n}\n};\nclass c: virtual  public a{\npublic:\nvoid show(){\ncout<<'\n';\ncout<<mul;\n}\n};\nclass d:public b,public c{\nvoid fly(){\ncout<<'' cute'';\n}\n};\nmain(){\nd obj;\nobj.getdata();\nobj.disp();\nobj.show();\n}	";
			cout<<"\npress 1 for clear the screen:";
			cin>>c;
			if(c=='1'){
			
			system("cls");
			cout<<"\n\n\n input code is shown try it working now";
			cout<<" enter the number :";
			cin>>x>>y;
		
				mul=x*y;
				sum=x+y;
				cout<<sum;
				cout<<"\n";
			cout<<mul;
		}

case 4:
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

 case  5  :
	cout<<"____mutiple inheritance____";
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

}
}
}








		

	


