#include<stdio.h>

int revofdigit(int);
int sumofdigit(int);
void main(){
        
    int num;
    
    printf("Enter three digit number :");
    scanf("%d",&num);
    
    printf("Sum of digits is : %d \n",sumofdigit(num));
    
    printf("Sum of digits is : %d \n",revofdigit(num));
}
int sumofdigit(int num){
	
	
	
	int r1=num%10;  //3 
    int q1=num/10;  //12
    int r2=q1%10;  //2
    int q2=q1/10;   //1
    int r3=q2%10;
    
    return r1+r2+r3;
	
}

int revofdigit(int num){
	
	
    
    
	
	int r1=num%10;  //3 
    int q1=num/10;  //12
    int r2=q1%10;  //2
    int q2=q1/10;   //1
    int r3=q2%10;  //1
    int a=r1*10*10;
    int b=r2*10;
    int c=r3*1;
    
    return a+b+c;
}
