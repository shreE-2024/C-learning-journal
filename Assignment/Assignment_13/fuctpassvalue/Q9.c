//Product (id, name, quantity, price)

#include<stdio.h>

typedef struct Complex{
	int real;
	char imaginary[10];
}Complex;
Complex store();
void display(Complex);

void main(){
	Complex c1,c2;
	c1=store();
	c2=store();		
		printf("\n ...User define in Info... \n");
	printf("\n ---------------------------------------------- \n");
	display(c1);
	
	
	printf("\n ---------------------------------------------- \n");
	
	printf("\n ---------------------------------------------- \n");
	display(c2);
	
}

Complex store(){
	Complex c;
	printf("Enter Real :");
	scanf("%d",&c.real);
	printf("Enter imaginary :");
	scanf("%s",c.imaginary);
	return c;
}
void display(Complex c){
	printf("   %d : Real || %s : imaginary  \n",c.real,c.imaginary);
}


