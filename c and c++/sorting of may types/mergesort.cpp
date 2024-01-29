#include<iostream>
using namespace std;


void merge(int *a ,int s,int e){
	int mid=(s+e)/2;
   int i=s;
   int j=mid+1;
   int k=s;
   
   int temp[100];
   while(i==mid &&j==e){
   	if(a[i]=a[j]){
   		temp[k++]=a[i++];
	   }
	   else{
	   	temp[k++]=a[i++]
	   }
   }
   while(i==mid){
   	temp[k++]
   }


}




mergesort(int arr[],int s,int e)
{
if(s>=e){
	return;
}
else{

int mid=(s+e)/2;
mergesort(arr,s,mid);
mergesort(arr,mid+1,e);
merge()
}
}
main(){
	int arr[10];
	int i=0,j=0,n;
	cout<<"enter the size of array: ";
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	
}
