//Student (rollNo, name, marks)

#include<stdio.h>

typedef struct Student{
	int rollNo;
	char name[20];
	int marks;
}Student;
Student store();
void display(Student);

void main(){
	int i,j,n,m,ch;
	printf("Enter the Number of Students in this Batch : ");
	scanf("%d",&m);
	printf("Enter the Number month (Ex.jan :1)Batch : ");
	scanf("%d",&ch);
	Student s[12][m];
			
		printf("\n ...Student Info... \n");
	printf("\n ---------------------------------------------- \n");
	
	for(i=1;i<=12;i++){
		if(ch==i){
			for(j=0;j<m;j++){
				printf("Enter Student Roll No :");
				scanf("%d",&s[i][j].rollNo);
				printf("Enter Student Name :");
				scanf("%s",s[i][j].name);
				printf("Enter Student Marks :");
				scanf("%d",&s[i][j].marks);
			printf("\n____________________________________________\n");
			}
		}
	}
	
	printf("\n ---------------------------------------------- \n");

	printf("\n ---------------------------------------------- \n");
	
	for(i=1;i<=12;i++){
		if(ch==i){
			for(j=0;j<m;j++){
				printf(" Student Roll No : %d \n",s[i][j].rollNo);
				printf(" Student Name    : %s \n",s[i][j].name);
				printf(" Student Marks   : %d \n",s[i][j].marks);
				printf("\n\n");
			}
		}
	}

}


