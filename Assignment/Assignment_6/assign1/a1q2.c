#include<stdio.h>

void perioft(int*,int*);
void areaoft(int*,int*);
void cirofc(int*);
void areaofc(int*);

void main(){
    int ch;
    
printf("What you want to find \n type 1 to find area of Triangle \n type 1 to find area of Circle \n");
scanf("%d",&ch);
	if(ch==1){
		int l,b;
    	printf("Enter the Length :");
    	scanf("%d",&l);
		
		printf("Enter the Breadth :");
    	scanf("%d",&b);
		
		perioft(&l,&b);
		areaoft(&l,&b);
	} 
	else{
		if(ch==2){
		int r;
    	printf("Enter the radious of Circle :");
    	scanf("%d",&r);
		
		cirofc(&r);
		areaofc(&r);
	} 
	else{
		printf("Invalid choise.....\n");
	}
	}
    
}

void areaoft(int* l,int* b){
	if((*l)>0||(*b)>0){    
		int A=(*b)*(*l);  
    	printf("Area of Rectangle = %d \n",A);
	}
    else{
    	printf("Enter a Length and Bredth be a Non 0 and Possitive value ");
	}	
}
void perioft(int* l,int* b){
	if((*l)>0||(*b)>0){
    	int P=2*((*l)+(*b));    
		 
    	printf("Perimeter = %d \n",P);
	}
    else{
    	printf("Enter a Length and Bredth be a Non 0 and Possitive value ");
	}
}
void areaofc(int* r){
	if((*r)>0){
    	int C=2*(22/7)*(*r);       
    	printf("Area of Circle = %d\n",C);
	}
    else{
    	printf("Enter a Radious be a Non 0 and Possitive value ");
	}
}
void cirofc(int* r){
	if((*r)>0){  
		int AC=2*(*r)*(*r);   
    	printf("Area of Circle = %d \n",AC);
	}
    else{
    	printf("Enter a Radious be a Non 0 and Possitive value ");
	}
}


