#include<stdio.h>
void main(){
	int age=23;
	char gender='f';
	if(gender=='f'&&age>=18||gender=='m'&&age>=21){
		printf("Eligible for Marry");
	}
	else{	
	printf("Not Eligible for Marry");		
	}
	
}
