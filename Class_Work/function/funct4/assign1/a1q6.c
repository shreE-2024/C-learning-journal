#include<stdio.h>

int marrage(char,int);
void main(){
	
	int age;
	char gender;
	printf("Enter your gender(m/f) :");
	scanf("%c",&gender);
	
	printf("Enter your age :");
	scanf("%d",&age);	
	
	if(marrage(gender,age)){
		printf("Eligible for Marry");
		}
		else{	
			printf("Not Eligible for Marry");		
		}
	}
	

int marrage(char gender,int age){
	
	
	
	if(age>0 && age<120){
		
		if(gender=='f'&&age>=18||gender=='m'&&age>=21){
		return 1;
		}
		else{	
			return 0;		
		}
	}
	else{
		printf(" Enter the valid information....");
		return 0;
	}

	
	
}
