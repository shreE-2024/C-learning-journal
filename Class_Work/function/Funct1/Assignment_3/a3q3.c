#include<stdio.h>

void sumofdigit();
void main(){
	
	sumofdigit();
}

void sumofdigit(){
	
	int num,r,sum=0;
	printf("Enter the Number :");
	scanf("%d",&num);
	while(num!=0){
		r=num%10;
		sum=sum+r;
		num=num/10;
		
	}
	printf("Sum of digit is :%d",sum);
}
