#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
main(){
	int n,x,y,mul,sum;
	 char c, arr1[12],arr2[12];
	int rollno1,rollno2;
	cout<<"enter the case:";
	cin>>n;
	switch(n){
		case  1:
			cout<<"mulitple inheritance:\n\n\nprogram:-";
			cout<<" \n#include<iostream>\nusing namespace std;\nclass a{\nprotected:\nint x,y,mul,sum;\npublic:\nvoid getdata(){\ncout<<'' enter the number :'';\ncin>>x>>y;\n}\n};\nclass b :   virtual public  a{\nprotected:\nint  mul;\npublic:\nvoid disp(){\nmul=x*y;\nsum=x+y;\ncout<<sum;\n}\n};\nclass c: virtual  public a{\npublic:\nvoid show(){\ncout<<'\n';\ncout<<mul;\n}\n};\nclass d:public b,public c{\nvoid fly(){\ncout<<'' cute'';\n}\n};\nmain(){\nd obj;\nobj.getdata();\nobj.disp();\nobj.show();\n}	";
			cout<<"press 1 for clear the screen:";
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
		else{
			cout<<"mulitple inheritance:\n\n\nprogram:-";
			cout<<" \n#include<iostream>\nusing namespace std;\nclass a{\nprotected:\nint x,y,mul,sum;\npublic:\nvoid getdata(){\ncout<<'' enter the number :'';\ncin>>x>>y;\n}\n};\nclass b :   virtual public  a{\nprotected:\nint  mul;\npublic:\nvoid disp(){\nmul=x*y;\nsum=x+y;\ncout<<sum;\n}\n};\nclass c: virtual  public a{\npublic:\nvoid show(){\ncout<<'\n';\ncout<<mul;\n}\n};\nclass d:public b,public c{\nvoid fly(){\ncout<<'' cute'';\n}\n};\nmain(){\nd obj;\nobj.getdata();\nobj.disp();\nobj.show();\n}	";
			cout<<"press 1 for clear the screen:";
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
	
	break;
	case 2:
cout<<" ____simple___ inheritance__:\n\n\nprogram:-";
			cout<<" #include<iostream>\nusing namespace std;\nclass A{\npublic:\nint x;\nvoid get(){\ncout<<'enter the value of x:';'\ncin>>x;\n}\n};\nclass B : public A {\npublic:\nvoid show(){\ncout<<'x is='<<x;\n}\n};\nmain(){\nB \nobj;\nobj.get()\nobj.show();\n}  ";                            
			
		cout<<"press 1 for clear screen:";
		cin>>c;
		if(c=='1')
		system ("cls");
					cout<<"\n\n\n input as shown in above code now try it work";
			cout<<"\n\n enter the value of x:";
			cin>>x;
		cout<<" x is ="<<x;
		break;
		case 3:

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

case 4:
	cout<<" \n\n \n ______multiple inheritance ";
cout<<"\n#include<iostream>\nusing namespace std;\nclass a{\npublic:\nint x,y;\n};\nclass b:public a{\npublic:\nget(){\ncout<<'enter the value of x and y:';\ncin>>x>>y;\n}\n};\nclass c:public b{\npublic:\nshow(){\ncout<<'multiplication of x and y is:'<<x*y;\n}\n};\nmain(){\nc obj;\nobj.get();\nobj.show()\n}";
cout<<" \npress 1to clera the above screen:  ";
cin>>c;
if(c=='1'){
system("cls");
cout<<"output in shown above try its working";
cout<<"enter the value of x and y:";
cin>>x>>y;
cout<<"multiplication of x and y is :"<<x*y;
}
else{
	cout<<"output in shown above try its working";
cout<<"\n\nenter the value of x and y:";
cin>>x>>y;
cout<<"multiplication of x and y is :"<<x*y;
}
}
}









		

	


