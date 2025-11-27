#include<stdio.h>

int evenodd();
void main(){
        
    
    if(evenodd()){
    	printf("This is Even number");
	}
    else{
    	printf("This is Odd number\n");
	}
    
	   
}
int evenodd(){
	
	int num;
    
    printf("Enter the number to Check Even or Odd :");
    scanf("%d",&num);
	
	if(num%2==0){
    	return 1;
	}
    else{
    	return 0;
	}
	
}
