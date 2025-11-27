//Product (id, name, quantity, price)


#include<stdio.h>

typedef struct Product{
	int Id;
	char name[20];
	int quantity;
	float price;
}Product;
Product store();
void display(Product);

void main(){
	Product p1,p2;
	p1=store();
	p2=store();		
		printf("\n ...User define in Info... \n");
	printf("\n ---------------------------------------------- \n");
	display(p1);
	
	
	printf("\n ---------------------------------------------- \n");
	
	printf("\n ---------------------------------------------- \n");
	display(p2);
	
}

Product store(){
	Product p;
	printf("Enter Product Id :");
	scanf("%d",&p.Id);
	printf("Enter Product Name :");
	scanf("%s",p.name);
	printf("Enter Product Quantity :");
	scanf("%d",&p.quantity);
	printf("Enter Product Price :");
	scanf("%f",&p.price);
	return p;
}
void display(Product p){
	printf(" Product Id          : %d \n",p.Id);
	printf(" Product Name        : %s \n",p.name);
	printf(" Product Salary      : %d \n",p.quantity);
	printf(" Product price       : %.2f \n",p.price);
	printf(" Total Product price : %.2f \n",p.price*p.quantity);
}
