//Complex (real, imaginary)

#include<stdio.h>

struct Complex{
	int real;
	char imaginary[10];
};
void main(){
	struct Complex c1;
	printf("Enter Real :");
	scanf("%d",&c1.real);
	printf("Enter imaginary :");
	scanf("%s",c1.imaginary);	
			
	struct Complex c2;
	
	c2.real=12;
	strcpy(c2.imaginary,"X2y");	
			
	printf("\n ...User define in Info... \n");
	printf("\n ---------------------------------------------- \n");
	printf("   %d : Real || %s : imaginary  \n",c1.real,c1.imaginary);
	
	printf("\n ---------------------------------------------- \n");
	printf("\n\n\n ...Build in Info... \n");
	printf("\n ---------------------------------------------- \n");
	printf("   %d : Real || %s : Imaginary  \n",c2.real,c2.imaginary);
	
}
