//Print fibonacci series?(optional)

#include<stdio.h>
void main(){
	int num,prv=0,post=1,count,temp;
	printf("How many number you want to print :");
	scanf("%d",&num);
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
