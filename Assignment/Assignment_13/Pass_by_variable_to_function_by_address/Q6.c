//Date (date, month, year)


#include<stdio.h>

typedef struct Date{
	int day;
	int month;
	int year;
}Date;
void store(Date*);
void display(Date*);

void main(){
	Date d1,d2;
	store(&d1);
	store(&d2);		
		printf("\n ...User define in Info... \n");
	printf("\n ---------------------------------------------- \n");
	display(&d1);
	
	
	printf("\n ---------------------------------------------- \n");
	
	printf("\n ---------------------------------------------- \n");
	display(&d2);
	
}

void store(Date* d){
	printf("Enter day :");
	scanf("%d",&d->day);
	printf("Enter Month :");
	scanf("%d",&d->month);	
	printf("Enter Year :");
	scanf("%d",&d->year);
}
void display(Date* d){
	printf("   %d/%d/%d \n",d->day,d->month,d->year);
}


