#include<iostream>
#include<stdlib.h>
using namespace std;
main(){
	char *ptr;
	int size ;
	cout<<"enter the size  of dynamic array :";
	cin>>size;
	ptr=(char *)malloc(size*sizeof(char));
	if(ptr=='\0'){
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
