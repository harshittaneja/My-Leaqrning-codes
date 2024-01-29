#include<iostream>
using namespace std;
main(){
	int i,j,m,n,max,arr[10][10];
	cout<<"enter the no of row and column:";
	cin>>m>>n;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cin>>arr[i][j];
	}
}

max=arr[0][0];

	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(max<arr[i][j]){
				max=arr[i][j];
			}
	}}
cout<<"max :"<<max;
}
