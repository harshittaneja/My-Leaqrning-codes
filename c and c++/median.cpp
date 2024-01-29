#include<iostream>
using namespace std;
main(){
	float arr[100],temp;
	float median;
	int i,n,j;
	cout<<"enter the arrray width:";
	cin>>n;
	cout<<"enter the array elements :";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=1;i<n;i++){
	for(j=0;j<n-i;j++){
	if(arr[j]>arr[j+1]){
		temp=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
	}
	}
	}
	for(i=0;i<n;i++){
		cout<<arr[i];
	}
	
	
	if(n%2==0){
		
	median = (arr[(n-1)/2]	+ arr[n/2])/2;
	cout<<"\n"<<arr[(n-1)/2]<<" "<<arr[n/2]<<" "<<median;
  	
	}
	else if(n%2!=0){
	
	median = arr[n/2];
	
	cout<<"median :"<<median;
}
}
