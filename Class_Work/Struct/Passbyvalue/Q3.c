//Admin (id, name, salary, allowance)

#include<stdio.h>
#include<string.h>
struct Admin{
	int Id;
	char name[20];
	float Salary;
	float allo;
};
void main(){
	struct Admin a1;
	printf("Enter Id :");
	scanf("%d",&a1.Id);
	printf("Enter Name :");
	scanf("%s",a1.name);
	printf("Enter Salary :");
	scanf("%f",&a1.Salary);
	printf("Enter Allowance :");
	scanf("%f",&a1.allo);
		
	struct Admin a2;
	a2.Id = 56;
	strcpy(a2.name,"Sham");
	a2.Salary = 7400;
	a2.allo = 2000;
	
	printf("\n ...User define in Info... \n");
	printf("\n ---------------------------------------------- \n");
	printf(" Admin Id        : %d \n",a1.Id);
	printf(" Admin Name      : %s \n",a1.name);
	printf(" Admin Salary    : %.2f \n",a1.Salary);
	printf(" Admin Allowance : %.2f \n",a1.allo);
	printf("\n ---------------------------------------------- \n");
	printf("\n\n\n ...Build in Info... \n");
	printf("\n ---------------------------------------------- \n");
	printf(" Admin Id        : %d \n",a2.Id);
	printf(" Admin Name      : %s \n",a2.name);
	printf(" Admin Salary    : %.2f \n",a2.Salary);
	printf(" Admin Allowance : %.2f \n",a2.allo);
}
