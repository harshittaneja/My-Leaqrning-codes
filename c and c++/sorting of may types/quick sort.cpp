#include<iostream>
using namespace std;
quicksort(int arr[],int n,int k){
	int i,j,pivot,temp;
	i=0;
	j=n-1;
	cout<<i<<j;
}


main(){
	int arr[25],i,n,k;
	cout<<"enter the width of array:";
	cin>>n;
	if(n%2==0){
		k=n/2;
	}
	else{
		k=(n-1)/2;
	}
	
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	quicksort(arr,n,k);
	
}
