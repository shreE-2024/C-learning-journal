#include<stdio.h>

void dicprice(float*,float*);
void main(){
    float dis,op;
    printf("Enter the origanal price of product :");
    scanf("%f",&op);
    
	if(op>=3000){
		dis= 60;
		dicprice(&op,&dis);
    	
	}
    else{
    	if(op>=2000){
			dis= 40;
    		dicprice(&op,&dis);
    	}
    	else{
    		if(op>=1000){
				dis= 25;
    			dicprice(&op,&dis);
			}
			else{
    			if(op>=500){
					dis= 15;
    				dicprice(&op,&dis);
					}
    			else{
    				if(op<500){
    					printf("Sorry! No discount on this product. ");
		
					}
    	
				}
			}
		}
	}
	
	
}
void dicprice(float* op,float* dis){
	
	float disP=(*op)*((*dis)/100); 
    float pr=(*op)-disP;
    	printf("Price of product = %f rs \n and given discount is %f = %f rs \n Origanal Price = %f",pr,(*dis),disP,(*op));
	
}

