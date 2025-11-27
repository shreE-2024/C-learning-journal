//Time (hour, min, sec)


#include<stdio.h>

typedef struct Time{
	int hr;
	int min;
	int sec;
}Time;
void store(Time*);
void display(Time*);

void main(){
	Time t1,t2;
	store(&t1);
	store(&t2);		
		printf("\n ...User define in Info... \n");
	printf("\n ---------------------------------------------- \n");
	display(&t1);
	
	
	printf("\n ---------------------------------------------- \n");
	
	printf("\n ---------------------------------------------- \n");
	display(&t2);
	
}

void store(Time* t){
	
	printf("Enter Hour :");
	scanf("%d",&t->hr);
	printf("Enter Minute :");
	scanf("%d",&t->min);	
	printf("Enter Second :");
	scanf("%d",&t->sec);
	
}
void display(Time* t){
	printf("   %d : %d : %d \n",t->hr,t->min,t->sec);
}


