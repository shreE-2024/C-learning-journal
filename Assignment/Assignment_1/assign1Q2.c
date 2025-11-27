#include<stdio.h>

void main(){
    int l=10,b=20,r=21;
    if(l>0||b>0){
    	int P=2*(l+b);    
		int A=b*l;  
    	printf("Area of Rectangle = %d and Perimeter = %d \n",A,P);
	}
    else{
    	printf("Enter a Length and Bredth be a Non 0 and Possitive value ");
	}
	if(r>0){
    	int C=2*(22/7)*r;    
		int AC=2*r*r;   
    	printf("Area of Circle = %d and Circumference = %d",AC,C);
	}
    else{
    	printf("Enter a Radious be a Non 0 and Possitive value ");
	}
    
}
