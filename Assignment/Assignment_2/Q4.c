#include <stdio.h>

int main() {
    
    int ch = 1;

    if (ch == 1) {
        int num=21;
    	if(num%2==0){
    		printf("This is Even number = %d \n",num);
		}
    	else{
    		printf("This is Odd number = %d \n",num);
		}
    }
    else if (ch==2) {
    		double bs=7000;
    		double da,ta,hra,ts;    
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
    

   
    return 0;
}

