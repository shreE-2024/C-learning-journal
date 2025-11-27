//SalesManager (id, name, salary, incentive, target)


#include<stdio.h>

typedef struct SalesManager{
	int Id;
	char name[20];
	float Salary;
	float incentive;
	int target;
}SalesManager;
void store(SalesManager*,int);
void display(SalesManager*,int);

void main(){
	int n;
	printf("Enter the size of array :");
	scanf("%d",&n);
	SalesManager sarr[n];

		printf("\n ...User define in Info... \n");
	printf("\n ---------------------------------------------- \n");
	store(sarr,n);
	
	printf("\n ---------------------------------------------- \n");
	
	printf("\n ---------------------------------------------- \n");
	display(sarr,n);
	printf("\n ---------------------------------------------- \n");
}

void store(SalesManager* s,int n){
	int i;
	for(i=0;i<n;i++){
		printf("Enter Id :");
		scanf("%d",&s[i].Id);
		printf("Enter Name :");
		scanf("%s",s[i].name);
		printf("Enter Salary :");
		scanf("%f",&s[i].Salary);
		printf("Enter Incentive :");
		scanf("%f",&s[i].incentive);
		printf("Enter Target :");
		scanf("%d",&s[i].target);
	}
}
void display(SalesManager* s,int n){
	int i;
	for(i=0;i<n;i++){
		printf("\n  Id         : %d \n",s[i].Id);
		printf("  Name       : %s \n",s[i].name);
		printf("  Salary     : %.2f \n",s[i].Salary);
		printf("  incentive  : %.2f \n",s[i].incentive);
		printf("  Id         : %d Sales\n",s[i].target);
	}
}

