#include<stdio.h>

void perfectnum(int,int);
void main(){
	
	int num1,num2;
	printf("Enter two numbers :");
	scanf("%d%d",&num1,&num2);
	
	perfectnum(int num1,int num2);
	
	
}

void perfectnum(num1,num2){
	
	int num1,num2,count,sum;
	
	
	
	for(;num1<=num2;num1++){
		sum=0;
		//printf("number is %d \n",num1);
		//printf(" sum is %d \n",sum);
		count=1;
		for(;num1>count;count++){
			if(num1%count==0){
			
				//printf("count is %d \n",count);
				sum=sum+count;
				//printf("sum is %d \n",sum);
			}
			//printf("sum is %d \n",sum);
		}
		if(sum==num1){
		
					printf("perfect num is %d ",num1);
					printf("their sum is %d \n",sum);
	}
	}
	
}





