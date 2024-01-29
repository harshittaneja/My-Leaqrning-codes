#include<iostream>
using namespace std;
main(){
	int arr[20],n,temp=0,k,temp1=0,i,j;
	char arr1[20];
	cout<<"enter the characters are width : ";
	cin>>n;
	for(k=0;k<n;k++){
		cout<<"enter the arr1"<<"["<<k<<"]"<<"element :";
		cin>>arr1[k];
}
	
	for(i=0;i<n;i++){
		arr[i]=(int)arr1[i];
	}
for(i=0;i<n;i++){
		cout<<arr[i];
	}
}

