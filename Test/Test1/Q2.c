// Sum of last two digit
#include<stdio.h>
void main(){
	int num=30423,r,sum=0,a=1;
	printf("Number is %d",num);
	while(a<3){
	
		r=num%10;
		sum=sum+r;
		num=num/10;
		a++;
		
		
	}
	printf(" and their last two digit number is %d",sum);
	}
