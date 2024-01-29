#include<stdio.h>
#include<string.h>
struct personal
{
	char name[100];
	int year;
	int age;
	int salary;
	
} s1;
int main(){
	
	printf("enter the detail information for process");
	printf("\nenter the name:",s1.name);
	gets(s1.name);
	printf("\nenter the year:",s1.year);
	scanf("%d",s1.year);
	printf("\nenter your salary:",s1.salary);
	printf("\nyour age:%d",s1.age);
	printf("\nyour yearis:%d",s1.year);
	printf("\nyour age:%d",s1.age);
	printf("\nyour salary:%d",s1.salary);
	return 0;
	
	
	
	
}
