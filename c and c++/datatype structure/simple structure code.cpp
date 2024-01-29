#include<stdio.h>
//struct keyword name of structure
  struct abc
{
	int number;
	char name[20];
	float marks;
	
};
main(){
	//structure object 
struct abc student1;
//acessing structure iniside varaible
student1.number=3;
student1.marks=4.55;
printf("%d",student1.number);
//we are printing float type structure variable not after point it will print by default 6 character 
printf("\n%f",student1.marks);
//now after .2f it will print 2 character
printf("\n%.2f",student1.marks);


}
