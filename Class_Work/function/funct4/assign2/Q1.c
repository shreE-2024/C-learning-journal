#include<stdio.h>

void discount(double);
void main(){
	
	double op;
    
    printf("Enter the Origanal Prise :");
    scanf("%2f",&op);
	discount(op);

}

void discount(double op){
	
		
	
    double dis,disP,pr;
    
    
    
	if(op>=3000){
		dis= 60;
    	disP=op*(dis/100); 
    	pr=op-disP;
	}
    else{
    	if(op>=2000){
			dis= 40;
    		disP=op*(dis/100); 
    		pr=op-disP;}
    	else{
    		if(op>=1000){
				dis= 25;
    			disP=op*(dis/100); 
    			pr=op-disP;
			}
			else{
    			if(op>=500){
					dis= 15;
    				disP=op*(dis/100); 
    				pr=op-disP;
				}
    			else{
    				if(op<500){
    					printf("No discount on this product. This is orignal price ");
		
					}
    	
				}
			}
		}
	}
	
	printf("Price of product = %2f rs \n and given discount is %2f = %2f rs \n Origanal Price = %2f",pr,dis,disP,op);
	
	
	
}


