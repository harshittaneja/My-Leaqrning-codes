#include<stdio.h>
main (){
	char str[20];
	FILE *fp;
	fp=fopen("loser.txt","a");
	printf("enter your name");
	gets(str);
		fputs(str,fp);
		fclose(fp);
}
