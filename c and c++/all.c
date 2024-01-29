#include<stdio.h>
main(){
	int x,y,p,q,sum,sub,div,modules;
	printf("Enter the value of x:");
	scanf("%d",&x);
	printf("\nEnter the value of y:");
	scanf("%d",&y);
	sum=x+y;
	sub=x-y;
	div=x/y;
	modules=x%y;
		prinf("\nFor arthematic opertors");
	printf("\n required values of \n1addition\n2 multiplication \n3division\n4modules:");
	scanf("%d%d%d%d%d",&sum,&sub,&div,&modules);
	
	if(x==y){
		printf("both have same values");
	}
	if(x!=y){
	 if(x>y){
	 	printf("both are unequal");
		printf("\n%d is larger then y %d",x,y);
		
	}
	else{
	printf("%d is larger then y%d",y,x);
	
}
}
printf("\n\n for assigment operator ");
p=x+1;
q=y*6;
printf("\n required encrement of x and y is %d and %d,p,q");
printf("\n\n for logiacl operator");
if(x>12&&y<34){
	printf("logic is correct");
}
else if {
	printf("logic is incorrect");
}
if(x<12||y>34){
	printf("logic need to improved");
	
} 
	else if {
	printf("logic is improved");
}
printf("\n\n for inrement or decriment operator");

printf("valus of x and y after post increment is%d and %d",x,y);

}

	

