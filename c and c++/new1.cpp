#include<iostream>
using namespace std;
main(){
	int i=0, arr[100],*ptr,sum=0,avg,n;
	
	ptr=new int[20];
	cout<<"enter the length of number:";
	cin>>n;
	for(i=0;i<n;i++){
		cin>>*(ptr+i);
		sum=sum + *(ptr+i);
		avg=sum/n;
	}
	cout<<"avg="<<avg;
	
}
