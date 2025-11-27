//SalesManager (id, name, salary, incentive, target)

#include<stdio.h>
#include<string.h>
struct SalesManager{
	int Id;
	char name[20];
	float Salary;
	float incentive;
	int target;
};
void main(){
	struct SalesManager s1;
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
		
	struct SalesManager s2;
	s2.Id = 56;
	strcpy(s2.name,"Sham");
	s2.Salary = 7400;
	s2.incentive = 600;
	s2.target = 70;
		
	printf("\n ...User define in Info... \n");
	printf("\n ---------------------------------------------- \n");
	printf("  Id         : %d \n",s1.Id);
	printf("  Name       : %s \n",s1.name);
	printf("  Salary     : %.2f \n",s1.Salary);
	printf("  incentive  : %.2f \n",s1.incentive);
	printf("  Target     : %d Sales\n",s1.target);
	printf("\n ---------------------------------------------- \n");
	printf("\n\n\n ...Build in Info... \n");
	printf("\n ---------------------------------------------- \n");
	printf("  Id         : %d \n",s2.Id);
	printf("  Name       : %s \n",s2.name);
	printf("  Salary     : %.2f \n",s2.Salary);
	printf("  incentive  : %.2f \n",s2.incentive);
	printf("  Id         : %d Sales\n",s2.target);
	
}
