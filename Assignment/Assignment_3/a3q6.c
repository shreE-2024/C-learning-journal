#include<stdio.h>
void main(){
	int num=6,r=1,sum=0;
	int check=num;
	
	while(r!=num);{
		
		if(num%r==0){
			sum=sum+r;	
		}
	r++;
	}
	(sum==check)?printf("Number is Perfect Number"):printf("Number is Not Perfect Number");


}
