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
	printf("\nfor arthematic opertors");
	printf("\n required values of addition:%d",sum);
	printf("\n required values of subraction:%d",sub);
	printf("\n required values of division:%d",div);
	printf("\n required values of modules:%d",modules);
	
	
	printf("\n\nrequired relational operators on x and y");
	if(x==y){
		printf("\nboth have same values");
	}
	if(x!=y){
	 if(x>y){
	 	printf("\n\nboth are unequal");
		printf("\n\n%d is larger then  %d",x,y);
		
	}
	else{
	printf("%d is larger then y%d",y,x);
	
}
}
printf("\n\n for assigment operator ");
p=x+1;
q=y*6;
printf("\n required increment of x and y is %d and %d,p,q");
printf("\n\n for logiacl operator");
if(x>12&&y<34){
	printf("logic is correct");
}
else{
	printf("logic is incorrect");
}
if(x<12||y>34){
	printf("logic need to improved");
	
} 
else{
	printf("logic is improved");
	
}
printf("\n\n for inrement or decriment operator");
x=y+++

printf("valus of x and y after post increment is%d and %d",x,y);
return 1;
}

	

