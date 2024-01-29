 #include<stdio.h>
#include<string.h>
main(){
	int i, z;
	char count[50];
	printf("enter a  string in small case string: ");
	gets(count);
	for(i=0;count[i]!='\0';i++){
		if(count[i]=='t'){
			if(count[i+1]=='h'&& count[i+2] =='e'){	
			   printf("\nnumber of the entered in a string %d",i);
			}
		}
	else{
		printf("wrong input");
	}
}
}
	             
			
		   
		    
  
  
    
	
	
	
	
   
