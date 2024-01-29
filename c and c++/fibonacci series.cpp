#include<stdio.h>
int fib(int x);
main()
{
	int i,x;
	printf("enter the number");
	scanf("%d",&x);
	for(i=0;i<=x;i++){
		printf("%d", 0 +fib(i));
	}
}
	int  fib( int x)
	{
		if(x==0){
			return   0;
			
		
		}
		else if(x==1){
			return  1;
		}
		else{
			return   fib(x-1)   +   fib(x-2);
		}
	}
	

