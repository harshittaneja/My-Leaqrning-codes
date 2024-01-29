#include<stdio.h>
#include<conio.h>
#include<string.h>
#define rate 1500
main(){ 
char name[35], high, adr[45];
int a,unit,b;
char arr[]="hello ji";

float amount;


printf("\nFor electric bill inquiry intrested press Y or not press N  ??\n\n");
  high= getche();
if(high == 'y'){
	printf("ENTER YOU NAME  %s",arr );
    scanf("%s",name);
	printf("\n Enter you E account Number: ");
	scanf("%4d",&b);
	printf("\n\n Enter the address:");
    scanf("%s",adr);
	printf("\n\n Enter your mobile number  :");
	scanf("%10d",&a);
	amount = unit*rate;
	printf(" \n\nEnter your unit of consuption  :");
	scanf("%d",&unit);
	printf("Amount to paid is = RS %12.4f ",amount);
}
else if (high =='n'){
	printf("  oops !SERVER ERROR !!!!!!!!!!!!!!");
	printf(" try other request");
}
}
