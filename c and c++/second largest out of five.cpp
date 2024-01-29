#include<iostream>
using namespace std;
main(){
	int arr[5],i,j,max=0;
	for(i=0;i<5;i++){
	cout<<"enter the"<< i+1<<" number:";
	cin>>arr[i];
}
for(j=0;j<5;j++)
	if(arr[j]<arr[j+1]){
		max=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=max;
	}
	cout<<arr[1];

}

