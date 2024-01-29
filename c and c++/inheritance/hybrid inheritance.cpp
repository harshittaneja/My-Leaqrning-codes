\n#include<iostream>
\nusing namespace std;
\nclass a {
	\npublic:
	\nchar arr[12];
	\nget(){
		
	\n\ncout<<" enter your name  :";
	\n}
\n};
\nclass b:public a{
	\npublic:
		\nshow(){
	\ngets(arr);
		\n}
		
\n};
\nclass c: public b{
	\npublic:
		\nshow1(){
			\ncout<<"your name is:"<<arr;
		\n}
		
\n};
\nmain(){
	\nc obj;
	\nobj.get();
	\nobj.show();
	\nobj.show1();
\n}
