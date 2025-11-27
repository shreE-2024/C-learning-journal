#include<stdio.h>
int temp(int);
void main(){
    
    int c;
    printf("Enter the tempreature in celcious :");
    scanf("%d",&c);
    printf("\n Fahrenheit = %d \n",temp(c));
    
    
}
int temp(int c){
	
	int f=(c*(9/5))+32;
	return f;
}
