#include <stdio.h>

void totalsal(float*,float,float,float);
void evenodd(int*);
void main() {
    
    int ch;
    
    printf("What you want to do opeation \n Enter 1 for Even odd operation \n Enter 2 for Finding Total salary...");
    scanf("%d",&ch);

    if (ch == 1) {
    	
        int num;
        
        printf("Enter the number to check Even Odd:");
        scanf("%d",&num);
        
        evenodd(&num);
        
    	
    }
    else if (ch==2) {
    		
    		float bs;
    		printf("Enter your Salary :");
    		scanf("%f",&bs);
      
    		if(bs<=5000){
    	
    		totalsal(&bs,0.10,0.20,0.25);
			}
    		else{
    			totalsal(&bs,0.15,0.25,0.30);
			}	
		}
    		else {
    			printf("Wrong Choice ");
        	}
    
		}
	

void evenodd(int* num){
	if((*num)%2==0){
    		printf("This is Even number = %d \n",(*num));
		}
    	else{
    		printf("This is Odd number = %d \n",(*num));
		}
	
}
void totalsal(float* bs,float da,float ta,float hra){
	
	da=(*bs)*da;
    ta=(*bs)*ta;
    hra=(*bs)*hra;
    float ts=(*bs)+da+ta+hra;
	printf("Total salary is %f \n and their salary is %f \n and da is %f,\n ta is %f,\n hra is %f ",ts,(*bs),da,ta,hra);
}

