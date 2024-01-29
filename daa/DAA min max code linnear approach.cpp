#include<iostream>
using namespace std;
main(){
	int i,min,max,n,count=0,count1=0;
	cout<<"enter the size of array ";
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	min=arr[0];
	max=arr[0];
	
	for(i=1;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
			count++;
			}
	 else{
	 
	 if(arr[i]<min){
			
			min=arr[i];
			count1++;
		}
	}
}
;
	cout<<"min ="<<min;
	cout<<"\n max ="<<max;
	cout<<"\n total no of elements ="<<n;
	cout<<"\n total comparison = "<< count + count1;
}
