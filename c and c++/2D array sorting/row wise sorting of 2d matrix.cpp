#include<iostream>
#include<stdio.h>
using namespace std;
main(){
	int arr[4][4],k,r,i,j,c,swap=0;
	cout<<"enter the size of array means row and column :";
	cin>>r>>c;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		cin>>arr[i][j];
		
	}
	}
	
	for(i=0;i<r;i++){
		for(j=1;j<c;j++){
		for(k=0;k<c-j;k++){
		
		if(arr[i][k]<arr[i][k+1]){
			swap=arr[i][k+1];
			arr[i][k+1]=arr[i][k];
			arr[i][k]=swap;
			}}
		}
	
	
}
for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		cout<<arr[i][j]<<" ";
	}
	cout<<endl;
}
	
}



