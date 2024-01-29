#include<stdio.h>
main(){
	int  i=0,arr[2][2]={1,2,3,4},*ptr=NULL;
	for(i=0;i<4;i++,ptr+2){
		printf("\n value at adress%d",ptr,*ptr);
		
	}
}
