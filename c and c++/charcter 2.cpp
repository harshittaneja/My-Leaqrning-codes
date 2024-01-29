#include<stdio.h>
main(){
	int a;
	float b;
	char c;
	printf("enter the value of a b and c\n");
	if(scanf("%d %f %c ", &a ,&b,&c)==3)
	printf("a=%2.3d b= %f c=%c\n",a,b,c);
	else{
		printf("error inter");
	}
}
