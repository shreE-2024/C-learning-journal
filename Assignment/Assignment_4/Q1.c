//Print armstrong number in the the given range 1 to n?
#include<stdio.h>
int main(){
	int rem,r1,num1,num2;
	int digit,t,count;
	int sum=0,num;
	
	printf("Enter two numbers :");
	scanf("%d%d",&num1,&num2);
	
	num=num1;
	
	for(;num<=num2;num++){  //sequencely flow number
		
		//printf("%d",num);
		num1=num;
		digit=1;
		
		for(;num1>9;num1=num1/10){  //use for finding how many digit in number
			digit++; 
			//printf("no of digit : %d \n",digit);
		}
	
			num1=num;
			count=digit;
		
			for(;digit>0;digit--){
				t=count;
				rem=num1%10;			//finding reminder
				//	printf("reminder is %d \n",rem);
			
		
				r1=rem;
		
				for(;t>1;t--){					//to calculate power of n(digit number) reminder
					rem=r1*rem;
					//	printf("reminder is %d \n",rem);
					}
				sum=sum+rem;
				num1=num1/10;
			}
		if(sum == num){
			
			printf(" %d is the armstrong number which \n",num);
		
			printf("sum is %d \n",sum);
			
			//num1=num;
		}
		sum=0;
	}
}
