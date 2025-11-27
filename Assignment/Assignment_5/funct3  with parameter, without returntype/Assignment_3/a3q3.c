#include<stdio.h>

void sumofdigit(int,int);
void main(){
	
	int num,sum=0;
	printf("Enter the Number :");
	scanf("%d",&num);
	sumofdigit(num,sum);
}

void sumofdigit(int num,int sum){
	
	int r;
	
	while(num!=0){
		r=num%10;
		sum=sum+r;
		num=num/10;
		
	}
	printf("Sum of digit is :%d",sum);
}
