#include<stdio.h>
int temp();
void main(){
    
    printf("\n Fahrenheit = %d \n",temp());
    
    
}
int temp(){
	int c;
    printf("Enter the tempreature in celcious :");
    scanf("%d",&c);
	int f=(c*(9/5))+32;
	return f;
}
