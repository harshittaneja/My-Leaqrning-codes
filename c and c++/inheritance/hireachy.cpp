#include<iostream>
using namespace std;
main(){
	char arr1[12],arr2[12];
	int rollno1,rollno2;
cout<<"\n#include<iostream>\n#include<string.h>\nusing namespace std;\nclass  a{\nprotected:\nchar name[50];\nchar  rollno[21];\n};\nclass b: public a{\npublic:\nchar section='x' ;\nvoid getdata(){\ncout<<' enter the name:';\ngets(name);\ncout<<' enter the roll no:';\ngets(rollno);\n}\nvoid showdata(){\ncout<<name;\ncout<<'\n' <<rollno;\ncout<<'\n'<<section;\n}\n};\nclass c: public a{\npublic:\nchar section='y'; \nvoid getdata(){\ncout<<'' enter the name:'';\ngets(name);\ncout<<'' enter the roll no:'';\ngets(rollno);\n}\nvoid showdata(){\ncout<<name;\ncout<<''\n ''<<rollno;\ncout<<'\n''<<section;\n}\n};\nmain(){\nb obj;\nc  obj1;\nobj.getdata();\nobj.showdata();\nobj1.getdata();\nobj1.showdata();\n}";

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


