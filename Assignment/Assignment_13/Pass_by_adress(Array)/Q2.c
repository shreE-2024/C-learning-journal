//Employee (id, name, salary)


#include<stdio.h>

typedef struct Employ{
	int Id;
	char name[20];
	float Salary;
}Employ;
void store(Employ*,int);
void display(Employ*,int);

void main(){
	int n;
	printf("Enter the size of array :");
	scanf("%d",&n);
	Employ earr[n];
	
		printf("\n ...User define in Info... \n");
	printf("\n ---------------------------------------------- \n");
	store(earr,n);	
	printf("\n ---------------------------------------------- \n");
	
	printf("\n ---------------------------------------------- \n");
	display(earr,n);
	printf("\n ---------------------------------------------- \n");
}


void store(Employ* e,int n){
	int i;
	for(i=0;i<n;i++){
		
		printf("Enter Employee Id :");
		scanf("%d",&e[i].Id);
		printf("Enter Name :");
		scanf("%s",e[i].name);
		printf("Enter Salary :");
		scanf("%f",&e[i].Salary);	
		
	}
	
	
}
void display(Employ* e,int n){
	int i;
	for(i=0;i<n;i++){

		printf("\n Employee Id      : %d \n",e[i].Id);
		printf(" Employee Name    : %s \n",e[i].name);
		printf(" Employee         : %.2f \n",e[i].Salary);
	}
}


