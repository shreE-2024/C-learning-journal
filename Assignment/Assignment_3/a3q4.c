#include<stdio.h>
void main(){
	int num=13,a=2,check=0;
	while(a!=num){
		if(num%a==0){
			check=1;
			
		}
		a++;
		
	}
	if(check!=1){ 
		printf("Number is prime");
		
	}
	else{
		printf("Number is Non-prime");
	}
	
}
