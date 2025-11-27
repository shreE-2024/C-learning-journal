//HR (id, name, salary, commission)

#include<stdio.h>
typedef struct hr{
	int Id;
	char name[20];
	float Salary;
	float Com;
}hr;
void store(hr*,int);
void display(hr*,int);

void main(){
	int n;
	printf("Enter the size of array :");
	scanf("%d",&n);
	hr harr[n];
		
		printf("\n ...User define in Info... \n");
	printf("\n ---------------------------------------------- \n");
	store(harr,n);
	
	
	printf("\n ---------------------------------------------- \n");
	
	printf("\n ---------------------------------------------- \n");
	display(harr,n);
	printf("\n ---------------------------------------------- \n");
}

void store(hr* h,int n){
	int i;
	for(i=0;i<n;i++){
		printf("Enter Id :");
		scanf("%d",&h[i].Id);
		printf("Enter Name :");
		scanf("%s",h[i].name);
		printf("Enter Salary :");
		scanf("%f",&h[i].Salary);
		printf("Enter Commission :");
		scanf("%f",&h[i].Com);
	}
}
void display(hr* h,int n){
	int i;
	for(i=0;i<n;i++){
		printf("\n  Id         : %d \n",h[i].Id);
		printf("  Name       : %s \n",h[i].name);
		printf("  Salary     : %.2f \n",h[i].Salary);
		printf("  Commission : %.2f \n",h[i].Com);
	}
}


