#include<stdio.h>
#include<string.h>
main(){
	char string[102]={"cprograming"};
	int c,d;
	printf("\n");
	for(c=0;c<=11;c++){
		d=c+1;
		printf("|%12.*s|\n",d,string);
		
	}
	printf("------------------------\n");
	for(c= 11;c>= 0;c--){
		d=c+1;
		printf("|%-12.*s|\n",d,string);
	}
	printf("---------------\n");
}
