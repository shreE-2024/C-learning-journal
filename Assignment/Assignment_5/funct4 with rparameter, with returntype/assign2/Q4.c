#include <stdio.h>

int evenodd(int);
double basicsal(double,double,double,double);
void main() {
	
	
	int ch;
	
	printf("Enter your choise(1/2)");
    scanf("%d",&ch);

    if (ch == 1) {
        int num;
        
        printf("Enter the Number :");
    scanf("%d",&num);
    	
        
    	if(evenodd(num)==1){
    		printf("This is Even number = %d \n",num);
		}
    	else{
    		printf("This is Odd number = %d \n",num);
		}
    }
    else if (ch==2) {
    		double bs;
    		 
			
			printf("Enter the Salary :");
    		scanf("%2f",&bs);
			   
    		if(bs<=5000){
    			
    			
    			printf("Total salary is %2f",basicsal(bs,0.10,0.20,0.25));
    			
			}
    		else{
    			
    			
    			printf("Total salary is %2f",basicsal(bs,0.15,0.25,0.30));
    			
			}
			
			
    	}
    	
    else {
    	printf("Wrong Choice ");
        
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
double basicsal(double bs,double da,double ta,double hra){
    		
    		 
    			da=bs*0.10;
    			ta=bs*0.20;
    			hra=bs*0.25;
			
			
			printf("their salary is %2f \n and da is %2f,\n ta is %2f,\n hra is %2f ",bs,da,ta,hra);
    	return bs+da+ta+hra;
    	
    
    
	
}

