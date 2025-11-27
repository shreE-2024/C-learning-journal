//Product (id, name, quantity, price)


#include<stdio.h>
#include<string.h>
struct Product{
	int Id;
	char name[20];
	int quantity;
	float price;
};
void main(){
	struct Product p1;
	printf("Enter Product Id :");
	scanf("%d",&p1.Id);
	printf("Enter Product Name :");
	scanf("%s",p1.name);
	printf("Enter Product Quantity :");
	scanf("%d",&p1.quantity);
	printf("Enter Product Price :");
	scanf("%f",&p1.price);
		
	struct Product p2;
	p2.Id = 56;
	strcpy(p2.name,"Soap");
	p2.quantity = 7;
	p2.price = 21;
	
	printf("\n ...User define in Info... \n");
	printf("\n ---------------------------------------------- \n");
	printf(" Product Id        : %d \n",p1.Id);
	printf(" Product Name      : %s \n",p1.name);
	printf(" Product Salary    : %d \n",p1.quantity);
	printf(" Product price : %.2f \n",p1.price*p1.quantity);
	printf("\n ---------------------------------------------- \n");
	printf("\n\n\n ...Build in Info... \n");
	printf("\n ---------------------------------------------- \n");
	printf(" Product Id        : %d \n",p2.Id);
	printf(" Product Name      : %s \n",p2.name);
	printf(" Product Quantity    : %d \n",p2.quantity);
	printf(" Product price : %.2f \n",p2.price*p1.quantity);
}
