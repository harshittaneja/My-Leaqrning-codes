#include<stdio.h>
int fact(int n);
main()
{
	int n,z;
	printf("enter the number:");
	scanf("%d",&n);
	z=fact(n);
	printf("factorial of number is %d",z);
	
}
int fact ( int n){
	int z;
	if (n==0||n==1){
		return 1;
		
	}
	else{
		return  z=n*fact(n-1);
	}
}
   
