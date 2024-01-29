#include<iostream>
using namespace std;
int fib(int);
main(){
	int n,i;
	cout<<"enter the number upto which we have to print - ";
	cin>>n;
	for(i=0;i<=n;i++){
		int z=fib(i);
		cout<<" "<<z;
		
	}
}
int fib(int n){
	if(n==0){
		return 0;

	}
	else if(n==1){
		return 1;
	}
	else{
		return fib(n-1)+fib(n-2);
	}
}
