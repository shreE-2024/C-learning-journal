//sum of even digit and odd digit
#include<stdio.h>
void main(){
	
	int num,rem,even=0,odd=0,digit=0;
	printf("Enter the number :");
	scanf("%d",&num);
	
	
	
	for(;num<0;num=num/10){
		printf("%d",num);
		rem=num%10;
		if(rem%2==0){
			even=even+rem;
		}
		else{
			odd=odd+rem;
		}
		
	}
	printf("Even number sum is :%d and odd number sum is :%d",even,odd);
	
}
