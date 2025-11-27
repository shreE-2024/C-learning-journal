//Point of Sale System: Build a simple point of sale system using structures to 
//represent products with attributes like name, price, and quantity. Allow users 
//to add items to a cart and calculate the total cost

#include<stdio.h>
int count;
typedef struct Sale{
	char name[30];
	double price;
	int quantity;
	
}Sale;
void addproduct(Sale*);
void displayproducts(Sale*);
void main(){
	Sale s[50]={{"Soap",180,4},{"Shampu",45,4},{"Shirts",744,7},{"Maggie",12,10},{"biscuit",27,7}};
	count=5;
	int ch;
	do{
		ch=0;
		printf("\n Add product to Cart  : 1");
		printf("\n Display product list : 2");
		printf("\n Exit                 : 0");
		printf("\n Enter your choise :");
		scanf("%d",&ch);
		switch(ch!=0){
			case 1:
				if(ch==1){
					printf("\n---------------------------------------------------------\n");
					printf("\n Add product to Cart...");
					addproduct(s);
					break;
				}
			case 2:
				if(ch==2){
					printf("\n---------------------------------------------------------\n");
					printf("\n Display product list of Cart...");
					displayproducts(s);
					break;
				}
				
			default:
				printf("\n invalid choise...");
				break;
		}
	}while(ch!=0);
	
	

}
void addproduct(Sale* s){
	printf("\n Enter product name :");
	fflush(stdin);
	fgets(s[count].name,count,stdin);
	printf("Enter the Quantity of product :");
	scanf("%d",&s[count].quantity);
	printf("Enter the price of product :");
	scanf("%lf",&s[count].price);
	count=count+1;
	
}
void displayproducts(Sale* s){
	int i;
	double sum=0;
	for(i=0;i<count;i++){
		printf("\n\n Peiduct Name   : %s",s[i].name);
		printf("\n Price          : %.2lf",s[i].price);
		printf("\n Quantity       : %d",s[i].quantity);
		printf("\n Total Price    : %.2lf",s[i].price*s[i].quantity);
		sum=(s[i].price*s[i].quantity)+sum;
	}
	printf("\n\n\n Total Price of All product : %.2lf \n\n ",sum);
	
	
}
