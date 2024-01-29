
#include<stdio.h>

main(){
	int i,j,row ,column;
	printf("enter the numer row :");
	scanf("%d",&row);
	printf("enter the numer column :");
	scanf("%d",&column);
	for(i=1;i<=row;i++){
		for(j=1;j<=column;j++){
			if(j>=0+i&&j<=8-i){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}//*******
//  *****
//   ***
//    *     this code made this pattern
