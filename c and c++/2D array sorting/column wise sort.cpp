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
	
	for(j=0;j<c;j++){
		for(i=1;i<r;i++){
		for(k=0;k<r-i;k++){
		
		if(arr[k][j]<arr[k+1][j]){
			swap=arr[k+1][j];
			arr[k+1][j]=arr[k][j];
			arr[k][j]=swap;
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



