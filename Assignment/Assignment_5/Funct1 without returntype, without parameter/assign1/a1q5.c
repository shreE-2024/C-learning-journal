#include<stdio.h>

void totalsal1();
void totalsal2();
void main(){
    float bs;
    printf("Enter your Salary :");
    scanf("%f",&bs);
    
      
    if(bs<=5000){
    	
    	totalsal1();
	}
    else{
    	totalsal2();
	}
	
	   
}

void totalsal1(){
	
	float bs,da=0.15,ta=0.25,hra=0.30;
	
	printf("Enter your Salary :");
    scanf("%f",&bs);
	
	da=bs*da;
    ta=bs*ta;
    hra=bs*hra;
    float ts=bs+da+ta+hra;
	printf("Total salary is %f \n and their salary is %f \n and da is %f,\n ta is %f,\n hra is %f ",ts,bs,da,ta,hra);
}

void totalsal2(){
	
	float bs,da=0.10,ta=0.20,hra=0.25;
	
	printf("Enter your Salary :");
    scanf("%f",&bs);
	
	da=bs*da;
    ta=bs*ta;
    hra=bs*hra;
    float ts=bs+da+ta+hra;
	printf("Total salary is %f \n and their salary is %f \n and da is %f,\n ta is %f,\n hra is %f ",ts,bs,da,ta,hra);
}
