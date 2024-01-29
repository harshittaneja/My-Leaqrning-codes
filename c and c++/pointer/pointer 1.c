#include<stdio.h>
main(){
	char a;
	int x;
	float p,q;
	
	a='A';
	x='125';
	p=10.25;
	q=18.76;
	printf("%c is stored at address %u\n",a,&a);
	printf("%c is stored at address %u\n",x,&x);
	printf("%f is stored at address %u\n",p,&p);
	printf("%f is stored at address %u",q,&q);
}
