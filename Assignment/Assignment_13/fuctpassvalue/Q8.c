//Distance ( feet, inch)


#include<stdio.h>

typedef struct Distance{
	int Km;
	int meter;
}Dis;
Dis store();
void display(Dis);

void main(){
	Dis d1,d2;
	d1=store();
	d2=store();		
		printf("\n ...User define in Info... \n");
	printf("\n ---------------------------------------------- \n");
	display(d1);
	
	
	printf("\n ---------------------------------------------- \n");
	
	printf("\n ---------------------------------------------- \n");
	display(d2);
	
}

Dis store(){
	Dis d;
	printf("Enter KM :");
	scanf("%d",&d.Km);
	printf("Enter Meter :");
	scanf("%d",&d.meter);	
	return d;
}
void display(Dis d){
	printf("   %d Kilometer : %d Meter  \n",d.Km,d.meter);
}


