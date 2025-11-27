#include<stdio.h>
void temp(int*);
void main(){
    int c;
    int* ptr=&c;
    printf("Enter the tempreature in celcious :");
    scanf("%d",&c);
    temp(ptr);
    
}
void temp(int* a){
	printf("%u",a);
	int f=((*a)*9/5)+32;
	printf("\n Fahrenheit = %d \n",f);
}
