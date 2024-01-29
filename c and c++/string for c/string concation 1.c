#include<string.h>
#include<stdio.h>
main(){
	char arg1[100],arg2[100]={" ENTER YOUR NAME IS "};
	printf("Enter you name:");
	gets(arg1);
	strcat(arg2,arg1);
	printf("%s",arg2);
}
