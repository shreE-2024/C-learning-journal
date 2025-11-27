//Distance ( feet, inch)

#include<stdio.h>

struct Dis{
	int Km;
	int meter;
};
void main(){
	struct Dis d1;
	printf("Enter KM :");
	scanf("%d",&d1.Km);
	printf("Enter Meter :");
	scanf("%d",&d1.meter);	
			
	struct Dis d2;
	
	d2.Km=12;
	d2.meter=545;	
			
	printf("\n ...User define in Info... \n");
	printf("\n ---------------------------------------------- \n");
	printf("   %d Kilometer : %d Meter  \n",d1.Km,d1.meter);
	
	printf("\n ---------------------------------------------- \n");
	printf("\n\n\n ...Build in Info... \n");
	printf("\n ---------------------------------------------- \n");
	printf("   %d Kilometer : %d Meter  \n",d2.Km,d2.meter);
	
}
