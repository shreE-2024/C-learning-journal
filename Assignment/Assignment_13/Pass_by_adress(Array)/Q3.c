//Admin (id, name, salary, allowance)


#include<stdio.h>

typedef struct Admin{
	int Id;
	char name[20];
	float Salary;
	float allo;
}Admin;
void store(Admin*,int);
void display(Admin*,int);

void main(){
	int n;
	printf("Enter the size of array :");
	scanf("%d",&n);
	Admin arr[n];
	
		printf("\n ...User define in Info... \n");
	printf("\n ---------------------------------------------- \n");
	store(arr,n);	
	printf("\n ---------------------------------------------- \n");
	
	printf("\n ---------------------------------------------- \n");
	display(arr,n);
	
}

void store(Admin* a,int n){
	int i;
	for(i=0;i<n;i++){
		printf("Enter Id :");
		scanf("%d",&a[i].Id);
		printf("Enter Name :");
		scanf("%s",a[i].name);
		printf("Enter Salary :");
		scanf("%f",&a[i].Salary);
		printf("Enter Allowance :");
		scanf("%f",&a[i].allo);
	}

}
void display(Admin* a,int n){
	int i;
	for(i=0;i<n;i++){
	printf(" Admin Id        : %d \n",a[i].Id);
	printf(" Admin Name      : %s \n",a[i].name);
	printf(" Admin Salary    : %.2f \n",a[i].Salary);
	printf(" Admin Allowance : %.2f \n",a[i].allo);
}
}

