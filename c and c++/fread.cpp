#include<stdio.h>
struct book{
	int bookid;
	char title;
	int price;
};
main(){
	struct book b1;
	FILE *fp;
	fp=fopen("flate.txt","ab");
	fread(&b1,sizeof(b1),1,fp);
	fclose(fp);
	
	
	
}
