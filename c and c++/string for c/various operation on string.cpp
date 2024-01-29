//this program tells the inbuilt function of strings in c 
#include<stdio.h>
#include<string.h>
int main(){
	int a,b;
	char s1[100], s2[100],s3[100];
	printf("enter the string");
	//get methods also used instead of scanf() because gets also takes space but scanf not takes space
	gets(s1);
	//put work as print function 
	puts(s1);
		printf("enter the string");
		gets(s2);
		//strlen function and other are prsent inside the string.h header file
	printf("\n string length=%d",strlen(s1));
	printf("\n copy string");
	//copying value of s1 string and putting into s2
	strcpy(s2,s1);
	puts(s2);
	puts("\n enter string to compare");
	gets(s3);
	//string compare
	strcmp(s3,s1);
	printf("\n upper case %s",strupr(s1));
    printf("\n lower case %s",s2);
	printf("\n concatted string");
	strcat(s2,s3);
	puts(s2);
	//string reverse
	printf("\n reverse of %s",strrev(s2));	
}

