#include<stdio.h>
main(){
	char str[10];
	FILE *fp;
	fp=fopen("loser.txt","r");
	if(fp==NULL){
		printf("file not found");
		
	}
	while(fgets(str,9,fp)!=NULL){
		printf("%a",str);
	}
	fclose(fp);
}
