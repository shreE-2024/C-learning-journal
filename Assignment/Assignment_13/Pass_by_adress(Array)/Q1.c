//Student (rollNo, name, marks)

#include<stdio.h>

typedef struct Student{
	int rollNo;
	char name[20];
	int marks;
}Student;
void store(Student*,int);
void display(Student*,int);

void main(){
	int n;
	printf("Enter the size of array :");
	scanf("%d",&n);
	Student sarr[n];
	
	
	
		
		printf("\n ...User define Info... \n");
	printf("\n ---------------------------------------------- \n");
	store(sarr,n);
	printf("\n ---------------------------------------------- \n");
	
	printf("\n ---------------------------------------------- \n");
	display(sarr,n);
	printf("\n ---------------------------------------------- \n");
	
}

void store(Student* s,int n){
	int i;
	for(i=0;i<n;i++){
		
		printf("\nEnter Student Roll No :");
		scanf("%d",&s[i].rollNo);
		printf("Enter Student Name :");
		scanf("%s",s[i].name);
		printf("Enter Student Marks :");
		scanf("%d",&s[i].marks);
		
	}
	
	
}
void display(Student* s,int n){
	int i;
	for(i=0;i<n;i++){
	
		printf("\n Student Roll No : %d \n",s[i].rollNo);
		printf(" Student Name    : %s \n",s[i].name);
		printf(" Student Marks   : %d \n",s[i].marks);
	}
}

