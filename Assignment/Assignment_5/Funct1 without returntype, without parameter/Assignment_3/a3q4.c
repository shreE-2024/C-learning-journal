#include<stdio.h>
void main(){
	
	primenum();
	
	
}
primenum(){
	int num,a=2,check=0;
	printf("Enter the Number :");
	scanf("%d",&num);
	while(a!=num){
		if(num%a==0){
			check=1;
			
		}
		a++;
		
	}
	if(check!=1){ 
		printf("Number is prime");
		
	}
	else{
		printf("Number is Non-prime");
	}
}
