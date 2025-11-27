#include <stdio.h>

void evenodd();
void main() {
	
	evenodd();
    
}

void evenodd(){
	
	int ch;
	
	Printf("Enter your choise(1/2)");
    scanf("%d",&ch);

    if (ch == 1) {
        int num;
        
        Printf("Enter the Number :");
    scanf("%d",&num);
        
    	if(num%2==0){
    		printf("This is Even number = %d \n",num);
		}
    	else{
    		printf("This is Odd number = %d \n",num);
		}
    }
    else if (ch==2) {
    		double bs;
    		double da,ta,hra,ts; 
			
			Printf("Enter the Salary :");
    		scanf("%2f",&bs);
			   
    		if(bs<=5000){
    			da=bs*0.10;
    			ta=bs*0.20;
    			hra=bs*0.25;
			}
    		else{
    			da=bs*0.15;
    			ta=bs*0.25;
    			hra=bs*0.30;
			}
			ts=bs+da+ta+hra;
			printf("Total salary is %2f \n and their salary is %2f \n and da is %2f,\n ta is %2f,\n hra is %2f ",ts,bs,da,ta,hra);
    	}
    	
    else {
    	printf("Wrong Choice ");
        
	}
    
	
}

