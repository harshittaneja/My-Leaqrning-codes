#include<stdio.h>
#include<string.h>
main(){
	char s1[20],s2[20],s3[20];
	int x,l1,l2,l3;
	printf("\n\n enter two string constants\n");
	printf("?");
	scanf("%s %s",s1,s2);
	x= strcmp(s1,s2);
	printf(x);
	//this strcmp return returns 1 as  true
	if(x!=0){
		//as if both are not equal then it returns zero as false
		printf("\n\nstring are not equal\n");
		strcat(s1,s2);
	}
	else{
		printf("\n\n strings are  equal");
		l1 = strlen(s1);
		l2=strlen(s2);
		
		
		
		
		printf("\ns1=%s\t length =%d character\n",s1,l1);
	}
}
