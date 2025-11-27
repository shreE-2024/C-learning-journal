//Product (id, name, quantity, price)

#include<stdio.h>

typedef struct Complex{
	int real;
	char imaginary[10];
}Complex;
void store(Complex*,int);
void display(Complex*,int);

void main(){
	int n;
	printf("Enter the size of array :");
	scanf("%d",&n);
	Complex carr[n];
			
		printf("\n ...User define in Info... \n");
	printf("\n ---------------------------------------------- \n");
	store(carr,n);	
	printf("\n ---------------------------------------------- \n");
	
	printf("\n ---------------------------------------------- \n");
	display(carr,n);
	printf("\n ---------------------------------------------- \n");
}

void store(Complex* c,int n){
	int i;
	for(i=0;i<n;i++){
		printf("\nEnter Real :");
		scanf("%d",&c[i].real);
		printf("Enter imaginary :");
		scanf("%s",c[i].imaginary);
	}
}
void display(Complex* c,int n){
	int i;
	for(i=0;i<n;i++){
		printf("\n   %d : Real || %s : imaginary  \n",c[i].real,c[i].imaginary);
	}
}


