#include<stdio.h>
main(){
	int a[50][50],b[50][50],c[50][50],i,j,k,n,p=3,q=3,r=3;
	printf("2D array:-\n\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Transpose\n\nChoose any one option : ");
	scanf("%d",&n);
switch(n){
	case 1:printf("Enter first 2D array:");
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
	scanf("%d",&a[i][j]);
}
}
printf("\n\nEnter second 2D array:");
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){ 
	scanf("%d",&b[i][j]);
}
}
printf("\n");
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
			printf("%d ",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
	break;
	case 2:printf("Enter first 2D array:");
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
	scanf("%d",&a[i][j]);
}
}
printf("\n\nEnter second 2D array:");
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
	scanf("%d",&b[i][j]);
}
}
printf("\n");
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
			printf("%d ",a[i][j]-b[i][j]);
		}
		printf("\n");
	}
	break;
	case 3:printf("Enter first 2D array:");
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
	scanf("%d",&a[i][j]);
}
}
printf("\n\nEnter second 2D array:");
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
	scanf("%d",&b[i][j]);
}
}
printf("\n");
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
			c[i][j]=0;
			for(k=0;k<r;k++){
			c[i][j]+=a[i][k]*b[k][j];
		}
			printf("%d ",c[i][j]);
}
printf("\n");
}
    break;
    case 4:printf("Enter first 2D array:");
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
	scanf("%d",&a[i][j]);
}
}
printf("\n");
	for(i=0;i<p;i++){
    	for(j=0;j<q;j++){
    		c[i][j]=a[j][i];
    		printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	break;
	default:printf("Wrong choice");
	break;
}
}
