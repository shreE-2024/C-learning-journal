//Admin (id, name, salary, allowance)


#include<stdio.h>

typedef struct Admin{
	int Id;
	char name[20];
	float Salary;
	float allo;
}Admin;
void store(Admin*);
void display(Admin*);

void main(){
	Admin a1,a2;
	store(&a1);
	store(&a2);		
		printf("\n ...User define in Info... \n");
	printf("\n ---------------------------------------------- \n");
	display(&a1);
	
	
	printf("\n ---------------------------------------------- \n");
	
	printf("\n ---------------------------------------------- \n");
	display(&a2);
	
}

void store(Admin* a1){
	printf("Enter Id :");
	scanf("%d",&a1->Id);
	printf("Enter Name :");
	scanf("%s",a1->name);
	printf("Enter Salary :");
	scanf("%f",&a1->Salary);
	printf("Enter Allowance :");
	scanf("%f",&a1->allo);
}
void display(Admin* a1){
	printf(" Admin Id        : %d \n",a1->Id);
	printf(" Admin Name      : %s \n",a1->name);
	printf(" Admin Salary    : %.2f \n",a1->Salary);
	printf(" Admin Allowance : %.2f \n",a1->allo);
}


