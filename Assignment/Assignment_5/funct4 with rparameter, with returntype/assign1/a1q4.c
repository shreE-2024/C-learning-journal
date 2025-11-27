#include<stdio.h>

int evenodd(int);
void main(){
	
	int num;
    
    printf("Enter the number to Check Even or Odd :");
    scanf("%d",&num);
        
    
    if(evenodd(num)){
    	printf("This is Even number");
	}
    else{
    	printf("This is Odd number\n");
	}
    
	   
}
int evenodd(int num){
	
	
	
	if(num%2==0){
    	return 1;
	}
    else{
    	return 0;
	}
	
}
