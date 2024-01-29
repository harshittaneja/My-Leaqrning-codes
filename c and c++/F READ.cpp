#include<stdio.h>
struct book{
	int bookid;
	char title;
	float price;
};
main(){
	struct book b1;
	FILE *fp;
	fp=fopen("flat.txt","rb");
	if(fp==NULL){
	printf("file not found");
	
}
fread(&b1,sizeof(b1),1,fp);
printf("%d  %s %f",b1.bookid,b1.title,b1.price);
fclose(fp);
}

