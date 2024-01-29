#include<iostream>
using namespace std;
main(){
	int a=0 ,b=1 ,temp=0,n ;
	cout<<"enter the value to which term you have to print the fibonacci series is :";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<temp<<" ";
		a=b;
		
		b=temp;
		temp=a+b;
	}
	
	
	
	
	
	
	
	
	
}
