// program to print to count vowels and consonets in a string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	int i=0,z=0,k=0;
	char str[100];
	printf("enter the string");
	gets(str);
	while(str[i]!='\0'){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
			k++;
		}
		else{
			z++;
		}
		i++;
	}
	printf("\nno vowels in string is%d",k);
	printf("\nno of consonent in string is %d",z);
getch();
}


