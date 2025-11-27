#include<stdio.h>

void perfectnum();
void main(){
	
	perfectnum();

}
void perfectnum(){
	
	
	int num,r=1,sum=0;
	printf("Enter the Number :");
	scanf("%d",&num);
	int check=num;
	
	while(r!=num);{
		
		if(num%r==0){
			sum=sum+r;	
		}
	r++;
	}
	(sum==check)?printf("Number is Perfect Number"):printf("Number is Not Perfect Number");

}
