#include<iostream>
using namespace std;
main(){
	char c;
	int a,b;
	float x,y,z;
	int n;
	cout<<"enter the choice";
	cin>>n;
	switch(n){
	
cout<<"\n#include<iostream>\nusing namespace std;\nmain(){\nfloat x,y,z;\ncout<<'enter the value of x and y and z';\ncin>>x>>y>>z;\ntry{\nif((y-z)==0){\nthrow'divide by zero attented';\n}\nelse{\ncout<<x/(y-z);\n}\n}\ncatch(const char*e\ncout<<e;\ncout<<'\n try again';\n}\n}";
	cout<<"\n\ncheck working of above code if you want to clear the press 1";
	cin>>c;
	if(c=='1'){
	system("cls");
	cout<<"\n\nenter the value of x and y and z";
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
		//note throw can access only char value not type int * e
		cout<<e;
		cout<<"\n try again";
	}
}
else{	
	cout<<"\n\nenter the value of x and y and z";
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
		//note throw can access only char value not type int * e
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
		//note throw can access only char value not type int * e
		cout<<e;
		cout<<"\n try again";
	break;
	}
}
}
		case 2 :
		cout<<"\n#include<iostream>\n#include<exception>\nusing namespace std;\nclass harshit:public exception//exception class is pre defined in complirer; \n{\npublic:\nconst char*what() const throw(){\ncout<<' user defined';\n}\n};\nmain(){\nint a,b;\ncout<<'enter the value of  a and b';\ncin>>a>>b;\ntry{\nif(b==0){\nharshit  z;\nthrow z;\n}\nelse{\ncout<<a/b;\n}\n}\ncatch(harshit z){\n}\n}\n}";
cout<<"\nenter the value of  a and b";
	cin>>a>>b;
	
		if(b==0){
			cout<<"user defined";
			
		}
		else{
			cout<<a/b;
		}
		
	
	
	
break;
}
}





