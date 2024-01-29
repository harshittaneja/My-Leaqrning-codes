#include<stdio.h>
#include<string.h>
main(){
	char count[50] ,arr1[50],arr2[50]={"the"};
	int i,z;
	printf("enter the string");
	scanf("%s",arr1);
	for(i=1;arr1[i]!='\0';i++){
	if(arr1[i]=='t'){
		if(arr1[i+1]=='h'){
			if(arr1[i+2]=='e'){
		z=1;
		printf("\n%d   %d\n",z,i);
		z++;
		break;
	}
}
}

     else{
		printf("\nwrong input");
	}
   }

 }
     


