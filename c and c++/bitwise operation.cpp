#include<stdio.h>
main(){
	int x,y;
	printf("Enter the value of X:");
	scanf("%d",&x);
	printf("\nEnter the value of Y:");
	scanf("%d",&y);
	printf("For bitwise and opertor between X and Y is %d",x&y);
	printf("\n\nFor bitwise once compliment of X an Y is %d and %d",~x,~y);
	printf("\n For bitiwise left shift  by 4 of X and Y is %d and %d ",x<<4,y<<4);
	printf("\n For bitiwise Right shift  by 6 of X and Y is %d and %d ",x>>6,y>>6);
	printf("\n For bitiwise or operation  on  X and Y is %d and %d ",x|y);
}
