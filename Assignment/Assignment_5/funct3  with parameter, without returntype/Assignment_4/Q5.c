//Print fibonacci series?(optional)

#include<stdio.h>


void fibonaccinum(int);
void main(){
	int num;
	printf("How many number you want to print :");
	scanf("%d",&num);
	
	fibonaccinum(num);
		
	
}

void fibonaccinum(int num){
	
	int prv=0,post=1,count,temp;
	
	//printf(" 0 \n");
	for(count=1;count<=num;count++)
	{	
		temp=prv;
		prv=post;
		post=temp;
		printf(" %d \n",post);
		post=prv+post;
			
}
}
