#include<iostream>
using namespace std;
main(){
	int arr[100],z,i,j,n;
	cout<<"enter the width of array:";
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	
		for(i=1;i<n;i++){
			for(j=0;j<n-i;j++){
					if(arr[j]>arr[j+1]){
			
			z=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=z;
		}
		}
	}	
	for(i=n-1;0<=i;i--){
		cout<<arr[i];
	}
}
