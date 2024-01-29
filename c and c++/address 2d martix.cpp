#include<iostream>
using namespace std;
main(){
	int i,j,a,*ptr,arr[4][4];
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
	cout<<"enter the"<<i+1<< "matrix:";
	cin>>arr[i][j];
}
}
cout<<"enter the element of matrix of searched :";
cin>>a;
if(a==arr[i][j]){
	ptr=&a;
}
cout<<"address of searched matrix is:"<<ptr;
}
