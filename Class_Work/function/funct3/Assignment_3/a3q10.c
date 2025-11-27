#include<stdio.h>

void sumoffirst(int,int);
void main(){
	int num,sum=0;
	printf("Enter the Number :");
	scanf("%d",&num);
	sumoffirst(num,sum);
	
}
void sumoffirst(int num,int sum){

	int fd=num%10;
	while(num>9){
		num=num/10;
		
	}
	sum=fd+num;
	
	printf("Sum of first and last digit is : %d",sum);
}
