#include<stdio.h>

void revofdigit(int);
void sumofdigit(int);
void main(){
    int num=123;
    
    printf("Enter three digit number :");
    scanf("%d",&num);
    
    sumofdigit(num);
    revofdigit(num);
}
void sumofdigit(int num){
	
	int r1=num%10;  //3 
    int q1=num/10;  //12
    int r2=q1%10;  //2
    int q2=q1/10;   //1
    int r3=q2%10;
    
    printf("Sum of digits is : %d \n",r1+r2+r3);
	
}

void revofdigit(int num){
	int r1=num%10;  //3 
    int q1=num/10;  //12
    int r2=q1%10;  //2
    int q2=q1/10;   //1
    int r3=q2%10;  //1
    int a=r1*10*10;
    int b=r2*10;
    int c=r3*1;
    
    printf("Reverse of Digits = %d",a+b+c);
}
