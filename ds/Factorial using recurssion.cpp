#include<iostream>
using namespace std;
int fact(int n);
main(){
	int n,z;
	cout<<"enter the number";
	cin>>n;
	z=fact(n);
	cout<<"factorial of the number "<<z;
}
int fact(int n){
	int z;
	if(n==0||n==1){
		return 1;
		
	}
	else{
		return z=n*fact(n-1);
	}
}
