//Distance ( feet, inch)


#include<stdio.h>

typedef struct Distance{
	int Km;
	int meter;
}Dis;
void store(Dis*);
void display(Dis*);

void main(){
	Dis d1,d2;
	store(&d1);
	store(&d2);		
		printf("\n ...User define in Info... \n");
	printf("\n ---------------------------------------------- \n");
	display(&d1);
	
	
	printf("\n ---------------------------------------------- \n");
	
	printf("\n ---------------------------------------------- \n");
	display(&d2);
	
}

void store(Dis* d){
	
	printf("Enter KM :");
	scanf("%d",&d->Km);
	printf("Enter Meter :");
	scanf("%d",&d->meter);	
	
}
void display(Dis* d){
	printf("   %d Kilometer : %d Meter  \n",d->Km,d->meter);
}


