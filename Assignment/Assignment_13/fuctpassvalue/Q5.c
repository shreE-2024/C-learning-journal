//SalesManager (id, name, salary, incentive, target)


#include<stdio.h>

typedef struct SalesManager{
	int Id;
	char name[20];
	float Salary;
	float incentive;
	int target;
}SalesManager;
SalesManager store();
void display(SalesManager);

void main(){
	SalesManager s1,s2;
	s1=store();
	s2=store();		
		printf("\n ...User define in Info... \n");
	printf("\n ---------------------------------------------- \n");
	display(s1);
	
	
	printf("\n ---------------------------------------------- \n");
	
	printf("\n ---------------------------------------------- \n");
	display(s2);
	
}

SalesManager store(){
	SalesManager s1;
	printf("Enter Id :");
	scanf("%d",&s1.Id);
	printf("Enter Name :");
	scanf("%s",s1.name);
	printf("Enter Salary :");
	scanf("%f",&s1.Salary);
	printf("Enter Incentive :");
	scanf("%f",&s1.incentive);
	printf("Enter Target :");
	scanf("%d",&s1.target);
	return s1;
}
void display(SalesManager s2){
	printf("  Id         : %d \n",s2.Id);
	printf("  Name       : %s \n",s2.name);
	printf("  Salary     : %.2f \n",s2.Salary);
	printf("  incentive  : %.2f \n",s2.incentive);
	printf("  Id         : %d Sales\n",s2.target);
}


