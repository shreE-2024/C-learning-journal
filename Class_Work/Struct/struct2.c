//Student (rollNo, name, marks)

#include<stdio.h>

typedef struct Student{
	int rollNo;
	char name[20];
	int marks;
}Student;


void main(){
	int k,i,j,num,nobatch;
	
	printf("How Many Batch you Entered Now: ");
	scanf("%d",&nobatch);
	int batch[nobatch],ch[nobatch];
	Student s[12][120];
	for(k=0;k<nobatch;k++){
				
		printf("Enter the Number month (Ex.jan :1)Batch : ");
		scanf("%d",&ch[k]);
		printf("Enter the Number student in Batch : ");
		scanf("%d",&batch[k]);
	}
			
			printf("\n ...Student Info... \n");
			
		printf("\n ---------------------------------------------- \n");
		for(k=0;k<nobatch;k++){
		
			for(i=1;ch[i]<=12;i++){
				if(ch[i]==ch[k]){
					for(j=0;j<batch[k];j++){
						printf("Enter Student Roll No :");
						scanf("%d",&s[i][j].rollNo);
						printf("Enter Student Name :");
						scanf("%s",s[i][j].name);
						printf("Enter Student Marks :");
						scanf("%d",&s[i][j].marks);
						printf("\n__________________________________________________________________\n");
					}
				}
			}
		}
	
	printf("\n ---------------------------------------------- \n");
	
	printf("\n ---------------------------------------------- \n");
	
	
	
	for(k=0;k<nobatch;k++){
		for(i=1;ch[i]<=12;i++){
			if(ch[k]==i){
				for(j=0;j<batch[k];j++){
					printf(" Student Roll No : %d \n",s[i][j].rollNo);
					printf(" Student Name    : %s \n",s[i][j].name);
					printf(" Student Marks   : %d \n",s[i][j].marks);
					printf("\n\n");
					printf("\n__________________________________________________________________\n");
				}
			}
		}
	}
}


