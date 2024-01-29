#include<iostream>
using namespace std;
main(){
	int arr[10][10],i,k=0,l,temp,j,n,m,arr1[100];
	cout<<"enter the size of row and column :";
	cin>>m>>n;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cin>>arr[i][j];
			
		
		}
	}

for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			arr1[k++]=arr[i][j];
			
		
		}
		
	}

	
	for(l=1;l<m*n;l++){
		for(k=0;k<m*n-l;k++){
	if(arr1[k]>arr1[k+1]){
		temp=arr1[k+1];
		arr1[k+1]=arr1[k];
		arr1[k]=temp;
	}
		}
	}
	for(k=0;k<m*n;k++){
		cout<<arr1[k]<<" ";
	}

}

