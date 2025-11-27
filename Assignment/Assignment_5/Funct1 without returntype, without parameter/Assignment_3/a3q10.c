#include<stdio.h>

void sumoffirst();
void main(){
	sumoffirst();
	
}
void sumoffirst(){
	
	
	int num,sum=0;
	printf("Enter the Number :");
	scanf("%d",&num);
	int fd=num%10;
	while(num>9){
		num=num/10;
		
	}
	sum=fd+num;
	
	printf("Sum of first and last digit is : %d",sum);
}
