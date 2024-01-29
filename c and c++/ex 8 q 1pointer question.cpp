#include<iostream>
using namespace std;
main(){
	float sum =0,arr[100],n,t,*ptr,avg;
	int i;
	cout<<"enter the length:";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"enter the "<<i<<" element:";
		cin>>arr[i];
		ptr=&arr[i];
		sum=sum +  *ptr;
		avg=sum/n;
	cout<<avg;
	
	}
	cout<<"average is :"<<avg;
	
	
}
