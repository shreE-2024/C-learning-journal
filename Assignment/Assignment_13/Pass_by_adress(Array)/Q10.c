//Product (id, name, quantity, price)


#include<stdio.h>

typedef struct Product{
	int Id;
	char name[20];
	int quantity;
	float price;
}Product;
void store(Product*,int);
void display(Product*,int);

void main(){
	int n;
	printf("Enter the size of array :");
	scanf("%d",&n);
	Product parr[n];
	
		printf("\n ...User define in Info... \n");
	printf("\n ---------------------------------------------- \n");
	store(parr,n);
	printf("\n ---------------------------------------------- \n");
	
	printf("\n ---------------------------------------------- \n");
	display(parr,n);
	printf("\n ---------------------------------------------- \n");
}

void store(Product* p,int n){
	int i;
	for(i=0;i<n;i++){
		printf("\nEnter Product Id :");
		scanf("%d",&p[i].Id);
		printf("Enter Product Name :");
		scanf("%s",p[i].name);
		printf("Enter Product Quantity :");
		scanf("%d",&p[i].quantity);
		printf("Enter Product Price :");
		scanf("%f",&p[i].price);
	}
}
void display(Product* p,int n){
	int i;
	for(i=0;i<n;i++){
		printf("\n Product Id          : %d \n",p[i].Id);
		printf(" Product Name        : %s \n",p[i].name);
		printf(" Product Salary      : %d \n",p[i].quantity);
		printf(" Product price       : %.2f \n",p[i].price);
		printf(" Total Product price : %.2f \n",p[i].price*p[i].quantity);
	}
}
