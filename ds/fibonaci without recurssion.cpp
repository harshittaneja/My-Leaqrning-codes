#include<iostream>
using namespace std;
main(){
int a=0,b=1,temp=0,n,i;
cout<<"enter the number upto which we have to print - ";
cin>>n;
for(i=0;i<=n;i++){
	cout<<temp<<" ";
	a=b;
	b=temp;
	temp=a+b;
	
}
}
