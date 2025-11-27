#include<stdio.h>
void main(){
	int num=1264,sum=0;
	int fd=num%10;
	while(num>9){
		num=num/10;
		
	}
	sum=fd+num;
	
	printf("Sum of first and last digit is : %d",sum);
}
