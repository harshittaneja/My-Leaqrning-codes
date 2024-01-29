#include<stdio.h>
main(){
	int m,n,i,temp=0,sum=0,rem=1;
	printf("Enter starting point m:");
	scanf("%d",&m);
	printf("Enter ending point n:");
	scanf("%d",&n);
	if(m<=n){
		// m stands for startin point and n stands for ending point for 
		for(i=m;i<=n;i++){
			temp=i;
			sum=0;
			while(temp>0){
				rem=temp%10;
				rem=rem*rem*rem;
				sum+=rem;
				temp/=10;
			}
			if(sum==i){
				printf("\n%d",i);
			}
		}
	}
}
