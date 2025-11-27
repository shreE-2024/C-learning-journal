#include<stdio.h>
void temp(int);
void main(){
    int c;
    printf("Enter the tempreature in celcious :");
    scanf("%d",&c);
    temp(c);
    
}
void temp(int c){
	int f=(c*(9/5))+32;
	printf("\n Fahrenheit = %d \n",f);
}
