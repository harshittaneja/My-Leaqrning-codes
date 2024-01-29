#include<stdio.h>
#define MAXLON 50000
main(){
	long int loan1,loan2,loan3,sancloan,sum23;
	printf("enter the value of previous two loans:\n");
	scanf("%d%d",&loan1,&loan2);
	printf("\n Enter the value of new loan :\n");
	scanf("%d",&loan3);
	 sum23=loan2+loan3;
	sancloan=(loan1>0)?0:(sum23>MAXLON? MAXLOAN-loan2: loan3);
	printf("\n\n");
	printf("previous loans pending :\n%d  %d\n",loan1,loan2);
	printf("Loan requested =%d\n,",loan3);
	printf("loan sanction =%d\n"scanloan);
}
