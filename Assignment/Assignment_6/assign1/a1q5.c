#include<stdio.h>

void totalsal(float*,float,float,float);
void main(){
    float bs;
    printf("Enter your Salary :");
    scanf("%f",&bs);
      
    if(bs<=5000){
    	
    	totalsal(&bs,0.10,0.20,0.25);
	}
    else{
    	totalsal(&bs,0.15,0.25,0.30);
	}
	
	   
}

void totalsal(float* bs,float da,float ta,float hra){
	
	da=(*bs)*da;
    ta=(*bs)*ta;
    hra=(*bs)*hra;
    float ts=(*bs)+da+ta+hra;
	printf("Total salary is %f \n and their salary is %f \n and da is %f,\n ta is %f,\n hra is %f ",ts,(*bs),da,ta,hra);
}
