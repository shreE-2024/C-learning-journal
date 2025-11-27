//Employee (id, name, salary)

#include<stdio.h>
#include<string.h>
struct Employ{
	int Id;
	char name[20];
	float Salary;
};
void main(){
	struct Employ e1;
	printf("Enter Employee Id :");
	scanf("%d",&e1.Id);
	printf("Enter Name :");
	scanf("%s",e1.name);
	printf("Enter Salary :");
	scanf("%f",&e1.Salary);
	
	struct Employ e2;
	e2.Id = 56;
	strcpy(e2.name,"Sham");
	e2.Salary = 7400;
	
	printf("\n ...User define in Info... \n");
	printf("\n ---------------------------------------------- \n");
	printf(" Employee Id     : %d \n",e1.Id);
	printf(" Employee Name   : %s \n",e1.name);
	printf(" Employee        : %.2f \n",e1.Salary);
	printf("\n ---------------------------------------------- \n");
	printf("\n\n\n ...Build in Info... \n");
	printf("\n ---------------------------------------------- \n");
	printf(" Employee Id     : %d \n",e2.Id);
	printf(" Employee Name   : %s \n",e2.name);
	printf(" Employee        : %.2f \n",e2.Salary);
}
