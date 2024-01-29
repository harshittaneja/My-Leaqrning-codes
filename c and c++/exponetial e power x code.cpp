//exponential code in c
#include<stdio.h>
#include<math.h>
main(){
	 float sum;
	 int n,x,i;
	 long int fact=1;
	 printf("Enter the value of x:");
	 scanf("%d",&x);
	 printf("Enter the Number of terms:");
	 scanf("%d",&n);
	 sum=1;
	 for(i=1;i<=n;i++){
	 	fact*=i;
	 	sum+=(pow(x,i)/fact);
	 }
	 printf("\nExp(x) Value:%f",sum);
}
