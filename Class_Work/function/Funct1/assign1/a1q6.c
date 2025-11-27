#include<stdio.h>

void marrage();
void main(){
	marrage();
	
	
	
}
void marrage(){
	
	int age;
	char gender;
	printf("Enter your gender(m/f) :");
	scanf("%c",&gender);
	
	printf("Enter your age :");
	scanf("%d",&age);	
	
	if(age>0 && age<120){
		
		if(gender=='f'&&age>=18||gender=='m'&&age>=21){
		printf("Eligible for Marry");
		}
		else{	
			printf("Not Eligible for Marry");		
		}
	}
	else{
		printf(" Enter the valid information....");
	}

	
	
}
