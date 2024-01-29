/*this is example of hetergenous datatype name union  similar like structure but the main diffrence in union and structure 
that union give fixed length that of maximum datatype size created in union but struct gives all datatype different size
*/
#include<stdio.h>
union items{
	int x;float y;char z;
	
}i1;
void main(){
	union  items  a;
	a.x=5;
	printf("\n%d",i1.x);
	a.y=3.5;
	printf("\n%f",i1.y);
	a.z='a';
	printf("\n%c",i1.z);
}
