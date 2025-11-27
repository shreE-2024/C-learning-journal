#include<stdio.h>
void main(){
	int num=123,r,sum=0;
	while(num!=0){
		r=num%10;
		sum=sum+r;
		num=num/10;
		
	}
	printf("Sum of digit is :%d",sum);
}
