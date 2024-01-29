#include<stdio.h>
main(){
	int x,y;
	int *ptr;
	x=10;
	ptr=&x;
	y=*ptr;
	printf("value of xis %d\n\n",x);
	printf("%d is stored at adddress%u\n",x,&x);
	printf("%d is stored at adres %u\n",*ptr,ptr);
	
}
