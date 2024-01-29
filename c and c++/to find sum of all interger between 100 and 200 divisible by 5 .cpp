#include<stdio.h>
main(){
	int i,sum=0;
	for(i=101;i<200;i++){
		if(i%5==0){
			sum+=i;
		}
	}
	printf("Sum of all integers between 100 and 200 which is divisible by 5:%d",sum);
}
