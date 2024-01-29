#include<stdio.h>
main(){
	int i,j,k,m,n;
	printf("enter the m and n for loop :");
	scanf("%d %d",&m,&n);
	
	for(i=1;i<=n;i++){//n=7
		k=1;
		for(j=1;j<=m;j++){//m=7
			if(j>=5-i && j<=3+i){
				printf("%d",k);
		j<4?k++:k--;
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
//        *
//       ***
//      *****

