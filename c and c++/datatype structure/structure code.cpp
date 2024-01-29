#include<stdio.h>
struct stores{
	char name[20];
	float price;
	int quantity;
};
//structue returning  type function
struct stores update(struct stores product,floatp,int q);
//float returning  type function
float mul(struct stores stock);
main(){
	float p_increment,value;
	int q_increment;
	//putting single value
	struct stores item={"xyz",25.75,12};
	
	printf("\n input increment values:");
	printf(" price increment and quantity increment");
	scanf(" %f %d",&p_increment,&q_increment);
	item=update(item,p_increment,q_increment);
	
	printf("updated values of items");
	printf("Name    :%s\n",items.name);
	printf("price   :%f\n",item.price);
	value=mul(items);
	
	
	printf("\n values of items =%f\n",value);
	
	
}
