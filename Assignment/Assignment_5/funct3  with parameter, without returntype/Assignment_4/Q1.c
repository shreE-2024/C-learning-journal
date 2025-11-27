//Print armstrong number in the the given range 1 to n?
#include<stdio.h>

void armstrong(int,int);
int main(){
	
	
	
	int num1,num2;
	
	printf("Enter two numbers :");
	scanf("%d%d",&num1,&num2);
	armstrong(num1,num2);
	
	
}

void armstrong(int num1,int num2){
	
	int rem,r1;
	int digit,t,count;
	int sum=0,num;
	

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
			
			printf(" %d is the armstrong number which ",num);
		
			printf("sum is %d \n",sum);
			
			//num1=num;
		}
		sum=0;
	}
}
