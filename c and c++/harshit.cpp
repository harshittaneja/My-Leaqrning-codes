#include<stdio.h>
main(){
	char s;
	FILE *fp;
	fp=fopen("loser.txt","r");
	if(fp==NULL)
	printf("file not found");
	
}

s=fgetc(fp);
while(!feof(fp)){
	printf("%c",s);
	
}
fclose(fp);
