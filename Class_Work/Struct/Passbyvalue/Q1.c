//Student (rollNo, name, marks)
#include<stdio.h>
#include<string.h>
struct Student{
	int rollNo;
	char name[20];
	int marks;
};
void main(){
	struct Student s1;
	printf("Enter Student Roll No :");
	scanf("%d",&s1.rollNo);
	printf("Enter Student Name :");
	scanf("%s",s1.name);
	printf("Enter Student Marks :");
	scanf("%d",&s1.marks);
	
	struct Student s2;
	s2.rollNo = 56;
	strcpy(s2.name,"Sham");
	s2.marks = 74;
	
	printf("\n ...User define in Info... \n");
	printf("\n ---------------------------------------------- \n");
	printf(" Student Roll No : %d \n",s1.rollNo);
	printf(" Student Name    : %s \n",s1.name);
	printf(" Student Marks   : %d \n",s1.marks);
	printf("\n ---------------------------------------------- \n");
	printf("\n\n\n ...Build in Info... \n");
	printf("\n ---------------------------------------------- \n");
	printf(" Student Roll No : %d \n",s2.rollNo);
	printf(" Student Name    : %s \n",s2.name);
	printf(" Student Marks   : %d \n",s2.marks);
}
