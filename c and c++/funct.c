#include<stdio.h>
#include<conio.h>
void sum();
void sum()
{
	int a=7,b=34,c=0;
	c=a+b;
	printf("%d\n",c);
}
void sub(int,int);
int mux();
float div(float a,float b);
void main()
{
	int i;
	float j;
sum();
	sub(12,9);
i=mux();
printf("%d",i);
j=div(20,6);
printf("\n%f",j);
}
         
void sub(int a,int b)
{
		sum();
	int c=a-b;
	printf("%d\n",c);
}
int mux()
{
	int a,b,c;
	a=8;b=6;
	c=a*b;
	return c;
}
float div(float a,float b)
{
	float c=a/b;
	
	return c;
	
}
