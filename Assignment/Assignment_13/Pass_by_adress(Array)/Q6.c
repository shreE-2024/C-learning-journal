//Date (date, month, year)


#include<stdio.h>

typedef struct Date{
	int day;
	int month;
	int year;
}Date;
void store(Date*,int);
void display(Date*,int);

void main(){
	int n;
	printf("Enter the size of array :");
	scanf("%d",&n);
    Date darr[n];
	
			
		printf("\n ...User define in Info... \n");
	printf("\n ---------------------------------------------- \n");
	store(darr,n);
	
	printf("\n ---------------------------------------------- \n");
	
	printf("\n ---------------------------------------------- \n");
	display(darr,n);
}

void store(Date* d,int n){
	int i;
	for(i=0;i<n;i++){
	printf("Enter day :");
	scanf("%d",&d[i].day);
	printf("Enter Month :");
	scanf("%d",&d[i].month);	
	printf("Enter Year :");
	scanf("%d",&d[i].year);
	}
}
void display(Date* d,int n){
	int i;
	for(i=0;i<n;i++){
	printf("   %d/%d/%d \n",d[i].day,d[i].month,d[i].year);
	}
}

