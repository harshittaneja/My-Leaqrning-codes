#include<iostream>
using namespace std;
main(){
	int arr[10],r,k,c,i,j,arr1[10],temp[10],count=0,count1=0,arr2[10],temp1[10],l;
	cout<<"enter the no of rows";
	cin>>r;
	for(i=0;i<r;i++){
		cin>>arr1[i];
	}
	cout<<"arr1[]=";
	for(i=0;i<r;i++){
		cout<<arr1[i];
	}
	cout<<endl;
		for(i=0;i<r;i++){
		cin>>arr2[i];
	}
	cout<<"arr2[]=";
	for(i=0;i<r;i++){
		cout<<arr2[i];
	}
	cout<<endl;
		
	
	for(i=0;i<r;i++){
		for(j=0;j<r;j++){
		
		if(arr1[j]==arr2[i]){
		
	temp[l++]=arr1[i];
	count++;
	}
	
}
}



cout<<"comperr[]=";
	for(k=0;k<count;k++){
		cout<<temp[k]<<" ";
	}
}
