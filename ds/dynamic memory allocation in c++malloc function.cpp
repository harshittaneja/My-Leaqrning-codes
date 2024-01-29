#include<iostream>
#include<stdlib.h>
using namespace std;
main(){
	int *ptr,size ;
	cout<<"enter the size  of dynamic array :";
	cin>>size;
	ptr=(int *)malloc(size*sizeof(int));
	if(ptr==NULL){
		cout<<"no memory alocated";
		
	}
	else{
		for(int i=0;i<size;i++){
			cin>>ptr[i];
		}
	}
	for(int i=0;i<size;i++){
			cout<<ptr[i];
		}
}
