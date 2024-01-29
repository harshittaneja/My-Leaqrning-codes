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
		for( i=0;i<n;i++){
		cout<<"enter the arr"<<"["<<i<<"]"<<"element :";
		cin>>arr[i];
	}
		for(i=1;i<n;i++){
		for(j=0;j<n-i;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j+1];
				temp1=arr1[j+1];
				arr[j+1]=arr[j];
				arr1[j+1]=arr1[j];
				arr[j]=temp;
				arr1[j]=temp1;
			}
	
			}
		}
		for(j=0;j<n;j++){
			cout<<arr[j];
		}
		
	

	for(j=0;j<n;j++){
			cout<<arr1[j];
		}
}

