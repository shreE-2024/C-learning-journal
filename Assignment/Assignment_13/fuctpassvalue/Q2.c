//Employee (id, name, salary)


#include<stdio.h>

typedef struct Employ{
	int Id;
	char name[20];
	float Salary;
}Employ;
Employ store();
void display(Employ);

void main(){
	Employ e1,e2;
	e1=store();
	e2=store();		
		printf("\n ...User define in Info... \n");
	printf("\n ---------------------------------------------- \n");
	display(e1);
	
	
	printf("\n ---------------------------------------------- \n");
	
	printf("\n ---------------------------------------------- \n");
	display(e2);
	
}

Employ store(){
	Employ e1;
	printf("Enter Employee Id :");
	scanf("%d",&e1.Id);
	printf("Enter Name :");
	scanf("%s",e1.name);
	printf("Enter Salary :");
	scanf("%f",&e1.Salary);	
	return e1;
}
void display(Employ e1){
	printf(" Employee Id     : %d \n",e1.Id);
	printf(" Employee Name   : %s \n",e1.name);
	printf(" Employee        : %.2f \n",e1.Salary);
}


