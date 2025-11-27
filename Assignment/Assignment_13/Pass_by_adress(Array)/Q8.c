//Distance ( feet, inch)

#include<stdio.h>
typedef struct Distance{
	int Km;
	int meter;
}Dis;
void store(Dis*,int);
void display(Dis*,int);

void main(){
	int n;
	printf("Enter the size of array :");
	scanf("%d",&n);
	
	Dis darr[n];
		printf("\n ...User define in Info... \n");
	printf("\n ---------------------------------------------- \n");
	store(darr,n);
	
	
	printf("\n ---------------------------------------------- \n");
	
	printf("\n ---------------------------------------------- \n");
	display(darr,n);
	printf("\n ---------------------------------------------- \n");
}

void store(Dis* d,int n){
	int i;
	for(i=0;i<n;i++){
		printf("Enter KM :");
		scanf("%d",&d[i].Km);
		printf("Enter Meter :");
		scanf("%d",&d[i].meter);	
	}
}
void display(Dis* d,int n){
	int i;
	for(i=0;i<n;i++){
		printf("   %d Kilometer : %d Meter  \n",d[i].Km,d[i].meter);
	}
}

