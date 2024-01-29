#include<stdio.h>
#define MAXLON 50000
main(){
	long int loan1,loan2,loan3,sancloan,sum23;
	printf("enter the value of previous two loans:\n");
	scanf("%ld%ld",&loan1,&loan2);
	printf("\n Enter the value of new loan :\n");
	scanf("%ld",&loan3);
	 sum23=loan2+loan3;
	sancloan=(loan1>0)?0:((sum23>MAXLON)? MAXLON-loan2: loan3);
	printf("\n\n");
	printf("previous loans pending :\n%ld  %ld\n",loan1,loan2);
	printf("Loan requested =%d\n,",loan3);
	printf("loan sanction =%ld\n",sancloan);
}
