// Create a structure Book with data members as bname, id, author, price. Accept the values of all these members from user and display them.
#include<stdio.h>
typedef struct Name{
	char fname[10];
	char mname[10];
	char lname[10];
}Name;
typedef struct Book{
	char bname[30]; 
	int id;
	Name author;
	float price;
}Book;
void main(){
	
	int i,num;
	printf("How many Book You want to resister Now :");
	scanf("%d",&num);
	Book barr[num];
	for(i=0;i<num;i++){
		printf("\n______________________________________________________________\n");
		printf("Enter the Name of Book :");
		scanf("%s",barr[i].bname);
		printf("Enter the Id of Book :");
		scanf("%d",&barr[i].id);
		printf("Enter the Name of Author \n");
		printf("	Enter the First Name :");
		scanf("%s",barr[i].author.fname);
		printf("	Enter the Middle Name :");
		scanf("%s",barr[i].author.mname);
		printf("	Enter the Last Name :");
		scanf("%s",barr[i].author.lname);
		printf("Enter the Price of Book :");
		scanf("%f",&barr[i].price);
		printf("\n______________________________________________________________\n");
	}
	for(i=0;i<num;i++){
		printf("\n______________________________________________________________\n");
		printf("\n Name of Book      : %s ",barr[i].bname);
		printf("\n Id of Book        : %d ",barr[i].id);
		printf("\n Name of Author    : %s %s %s",barr[i].author.fname,barr[i].author.mname,barr[i].author.lname);
		printf("\n Price of Book     : %.2f",barr[i].price);
		printf("\n______________________________________________________________\n");
	}
}
