#include<stdio.h>
main(){
	int i,n;
	printf("enter the which you want calculate table :");
	scanf("%d",&n);
	printf(" for table : \n");
	for(i=0;i<11;i++){
		printf("%d*%d= %d\n",n,i,n*i);
	}
}
