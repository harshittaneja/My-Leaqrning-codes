#include<stdio.h>
main(){
	char arr[10];
	int i;


	scanf("%s",arr);


	
	printf("%s",arr);

	printf("\n");

}
/*
this type of logic will not work
main(){
	char arr[10];
	int i;

	
	scanf("%s",arr);

	//for(i=0;i!<2;i++){
	
	printf("%s",arr[i]);
	printf("\n");
}
}

*/

// next type of error code
/*

main(){
	char arr[10];
	int i;

	for(i=0;i<5;i++){
	scanf("%s",arr[i]);
}

		for(i=0;i<2;i++){
	printf("%s",arr[i]);
}
	printf("\n");

}
*/







