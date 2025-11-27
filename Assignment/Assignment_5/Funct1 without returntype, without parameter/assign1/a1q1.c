#include<stdio.h>
void temp();
void main(){
    
    temp();
    
}
void temp(){
	int c;
    printf("Enter the tempreature in celcious :");
    scanf("%d",&c);
	int f=(c*(9/5))+32;
	printf("\n Fahrenheit = %d \n",f);
}
