//HR (id, name, salary, commission)


#include<stdio.h>

typedef struct hr{
	int Id;
	char name[20];
	float Salary;
	float Com;
}hr;
void store(hr*);
void display(hr*);

void main(){
	hr h1,h2;
	store(&h1);
	store(&h2);		
		printf("\n ...User define in Info... \n");
	printf("\n ---------------------------------------------- \n");
	display(&h1);
	
	
	printf("\n ---------------------------------------------- \n");
	
	printf("\n ---------------------------------------------- \n");
	display(&h2);
	
}

void store(hr* h1){
	printf("Enter Id :");
	scanf("%d",&h1->Id);
	printf("Enter Name :");
	scanf("%s",h1->name);
	printf("Enter Salary :");
	scanf("%f",&h1->Salary);
	printf("Enter Commission :");
	scanf("%f",&h1->Com);
	
}
void display(hr* h1){
	printf("  Id         : %d \n",h1->Id);
	printf("  Name       : %s \n",h1->name);
	printf("  Salary     : %.2f \n",h1->Salary);
	printf("  Commission : %.2f \n",h1->Com);
}


