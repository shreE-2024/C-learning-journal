//HR (id, name, salary, commission)

#include<stdio.h>
#include<string.h>
struct hr{
	int Id;
	char name[20];
	float Salary;
	float Com;
};
void main(){
	struct hr h1;
	printf("Enter Id :");
	scanf("%d",&h1.Id);
	printf("Enter Name :");
	scanf("%s",h1.name);
	printf("Enter Salary :");
	scanf("%f",&h1.Salary);
	printf("Enter Commission :");
	scanf("%f",&h1.Com);
		
	struct hr h2;
	h2.Id = 56;
	strcpy(h2.name,"Sham");
	h2.Salary = 7400;
	h2.Com = 2000;
	
	printf("\n ...User define in Info... \n");
	printf("\n ---------------------------------------------- \n");
	printf("  Id         : %d \n",h1.Id);
	printf("  Name       : %s \n",h1.name);
	printf("  Salary     : %.2f \n",h1.Salary);
	printf("  Commission : %.2f \n",h1.Com);
	printf("\n ---------------------------------------------- \n");
	printf("\n\n\n ...Build in Info... \n");
	printf("\n ---------------------------------------------- \n");
	printf("  Id         : %d \n",h2.Id);
	printf("  Name       : %s \n",h2.name);
	printf("  Salary     : %.2f \n",h2.Salary);
	printf("  Commission : %.2f \n",h2.Com);

}
