#include<stdio.h>

int marrage();
void main(){
	
	
	if(marrage()){
		printf("Eligible for Marry");
		}
		else{	
			printf("Not Eligible for Marry");		
		}
	}
	

int marrage(){
	
	int age;
	char gender;
	printf("Enter your gender(m/f) :");
	scanf("%c",&gender);
	
	printf("Enter your age :");
	scanf("%d",&age);	
	
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
