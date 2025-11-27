#include<stdio.h>

void evenodd();
void main(){
        
    evenodd(num);
    
	   
}
void evenodd(){
	
	int num;
    
    printf("Enter the number to Check Even or Odd :");
    scanf("%d",&num);
	
	if(num%2==0){
    	printf("This is Even number = %d \n",num);
	}
    else{
    	printf("This is Odd number = %d \n",num);
	}
	
}
