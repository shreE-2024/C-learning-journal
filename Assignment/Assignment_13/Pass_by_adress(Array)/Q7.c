//Time (hour, min, sec)


#include<stdio.h>

typedef struct Time{
	int hr;
	int min;
	int sec;
}Time;
void store(Time*,int);
void display(Time*,int);

void main(){
	int n;
	printf("Enter the size of array :");
	scanf("%d",&n);
	Time tarr[n];
			
		printf("\n ...User define in Info... \n");
	printf("\n ---------------------------------------------- \n");
	store(tarr,n);	
	
	printf("\n ---------------------------------------------- \n");
	
	printf("\n ---------------------------------------------- \n");
	display(tarr,n);
	printf("\n ---------------------------------------------- \n");
}

Time store(Time* t,int n){
	int i;
	for(i=0;i<n;i++){
		printf("Enter Hour :");
		scanf("%d",&t.hr);
		printf("Enter Minute :");
		scanf("%d",&t.min);	
		printf("Enter Second :");
		scanf("%d",&t.sec);
	}
}
void display(Time* t,int n){
	int i;
	for(i=0;i<n;i++){
		printf("   %d : %d : %d \n",t.hr,t.min,t.sec);
	}
}

