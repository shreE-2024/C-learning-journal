//Student (rollNo, name, marks)

#include<stdio.h>

typedef struct Student{
	int rollNo;
	char name[20];
	int marks;
}Student;
void store(Student*);
void display(Student*);

void main(){
	Student s1,s2;
	store(&s1);
	store(&s2);		
		printf("\n ...User define in Info... \n");
	printf("\n ---------------------------------------------- \n");
	display(&s1);
	
	
	printf("\n ---------------------------------------------- \n");
	
	printf("\n ---------------------------------------------- \n");
	display(&s2);
	
}

void store(Student* s1){
	
	printf("Enter Student Roll No :");
	scanf("%d",&s1->rollNo);
	printf("Enter Student Name :");
	scanf("%s",s1->name);
	printf("Enter Student Marks :");
	scanf("%d",&s1->marks);
	
}
void display(Student* s1){
	printf(" Student Roll No : %d \n",s1->rollNo);
	printf(" Student Name    : %s \n",s1->name);
	printf(" Student Marks   : %d \n",s1->marks);
}


