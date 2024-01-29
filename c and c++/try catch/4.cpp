#include<stdio.h>
main(){
	int arr[100],n,i,e,j;
	printf("Enter the total no. of elements less than 100:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter a[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	printf("Enter an element to be searched:");
	scanf("%d",&e);
	for(i=0;i<n;i++){
		j=i+1;
	if(arr[i]==e){
		printf("Position of %d : %d\nand its index : %d",arr[i],j,i);
	}
}
}
