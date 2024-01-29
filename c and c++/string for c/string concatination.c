#include<stdio.h>
#include<string.h>
main(){
	char arg1[100], arg2[100];
	printf("enter a string :");
	gets(arg1);
	strcat(arg2,arg1);
	printf("\n copied string is %s",arg2);
}
