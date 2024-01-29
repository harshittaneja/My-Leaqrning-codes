#include<stdio.h>
main(){
	float a,b,c,d,max;
	printf("\nenter the valuesof a:");
	scanf("%f",&a);
	printf("\nenter the valuesof b:");
		scanf("%f",&b);
	printf("\nenter the valuesof c:");
		scanf("%f",&c);
		printf("\nenter the valuesof d:");
			scanf("%f",&d);
		max=(a>b)?(a>c)?(a>d)?a:d:(b>c)?(b>d)?b:d:((c>d)?c:d):((b>c)?((b>d)?b:d):(c>d)?c:d);
		printf("largest number is %f",max);
}
