//finding sum of all terms of a digit
#include<iostream>
 using namespace std;
 main()
 {
 	int  s=0,n,i,a;
 	cout<<"enter a number :";
 	cin>>n;
 	for(i=n;i>0;i=i/10)
 	{
 		a=i%10;
 		s=s+a;
	 }
	 cout<<s;
 }
