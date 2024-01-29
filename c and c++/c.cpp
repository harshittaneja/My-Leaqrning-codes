#include<stdio.h>
  main(){
	char str[10];
	FILE *fp;
	fp=fopen("flate.txt","r");
	if(fp==NULL){
		printf("file not found");
		
	}
	while(fgets(str,20,fp)!=NULL){
		printf("%s",str);
	}
	fclose(fp);
}
