#include<stdio.h>

void marrage(char,int);
void main(){
	int age=23;
	char gender;
	printf("Enter your gender(m/f) :");
	scanf("%c",&gender);
	
	printf("Enter your age :");
	scanf("%d",&age);	
	
	if(age>0&&age<120&&gender=='m'&&gender=='f'){
		marrage(gender,age);
	}
	else{
		printf(" Enter the valid information....");
	}
	
	
	
}
void marrage(char gender,int age){
	if(gender=='f'&&age>=18||gender=='m'&&age>=21){
		printf("Eligible for Marry");
	}
	else{	
	printf("Not Eligible for Marry");		
	}
}
