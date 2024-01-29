#include<stdio.h>
#include<string.h>
main(){
	char arg1[100],arg2[100];
	printf("enter first string:");
	gets(arg1);
	strrev (arg1);
	strcpy(arg2,arg1);
	printf("reverse of string is %s",arg2);
	
}
