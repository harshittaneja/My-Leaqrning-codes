#include<stdio.h>
main(){
	char  c[23];
	//int p;
	printf("For check day of week\n m MONDAY.\nt TUESDAY or THURSDAY.\nw WEDNESDAY.\nf Friday.\ns SATURDAY 0r SUNDAY.  ");
	printf("\n choose any one operation");
	scanf("%s",c);
	switch(c)
	{
		
		case "monday" :
		 printf("ITS MONDAY");
		         
		break;
		
		  case "tue": printf("ITS TUESDAY or THURSDAY");
		 
		   break;
		
	          case "wed" : printf("ITS WEDNESDAY ");
	     
	          break;
	     
	           default  :
	           	printf("wrong input");
	           	break;
		 
	}
}
