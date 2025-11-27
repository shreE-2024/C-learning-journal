#include <stdio.h>

int xyz(int,float);
int main() {
	
		char op;
    int pr,fp;
    
    
    printf("Enter s if your student :");
    scanf("%c",&op);
    
    printf("Enter the Price :");
    scanf("%d",&pr);

    if (op == 's') {
        if (pr>500) {
        	(0.20>0)?printf("%d",xyz(pr,0.20)):printf("%d",pr); 
    		}
    	else{
        	(0.10>0)?printf("%d",xyz(pr,0.10)):printf("%d",pr); 
    	}
	}
    else{
        if (pr>600) {
        	(0.15>0)?printf("%d",xyz(pr,0.15)):printf("%d",pr); 
        	
    		}
    	else{
        	printf("No discount");
    	}
    }
    
        
	
}

int xyz(int pr,float dis){
	
	
	   

    printf("Total Price = %d \n and given discount is %f \n So final price is :", pr,dis);
    return pr-(pr*dis);
}

