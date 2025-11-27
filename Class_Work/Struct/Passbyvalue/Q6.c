//Date (date, month, year)

#include<stdio.h>

struct Date{
	int day;
	int month;
	int year;
};
void main(){
	struct Date d1;
	printf("Enter day :");
	scanf("%d",&d1.day);
	printf("Enter Month :");
	scanf("%d",&d1.month);	
	printf("Enter Year :");
	scanf("%d",&d1.year);
		
	struct Date d2;
	
	d2.day=22;
	d2.month=05;	
	d2.year=2006;

			
	printf("\n ...User define in Info... \n");
	printf("\n ---------------------------------------------- \n");
	printf("   %d/%d/%d \n",d1.day,d1.month,d1.year);
	
	printf("\n ---------------------------------------------- \n");
	printf("\n\n\n ...Build in Info... \n");
	printf("\n ---------------------------------------------- \n");
	printf("   %d/%d/%d \n",d2.day,d2.month,d2.year);
	
}
