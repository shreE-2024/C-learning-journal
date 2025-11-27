#include<stdio.h>

int perioft(int,int);
int areaoft(int,int);
int cirofc(int);
int areaofc(int);

void main(){
    int ch;
    
	printf("What you want to find \n type 1 to find area of Triangle \n type 1 to find area of Circle :");
	scanf("%d",&ch);
	if(ch==1){
		
		
		int l,b;
    	printf("Enter the Length :");
    	scanf("%d",&l);
		
		printf("Enter the Breadth :");
    	scanf("%d",&b);
	if(l>0||b>0){    
				
		printf("Perimeter = %d \n",perioft(l,b));
		
		printf("Area of Rectangle = %d \n",areaoft(l,b));
	}
    else{
    	printf("Enter a Length and Bredth be a Non 0 and Possitive value ");
		}	
	
	} 
	else{
		if(ch==2){
		

	int cirofc(){
	int r;
    	printf("Enter the radious of Circle :");
    	scanf("%d",&r);
	if(r>0){  
		
		printf("Area of Circle = %d\n",cirofc(r));
		printf("Area of Circle = %d \n",areaofc(r));
		
	}
    else{
    	printf("Enter a Radious be a Non 0 and Possitive value ");
		}
		
	}
		
	} 
	else{
		printf("Invalid choise.....\n");
	}
	}
    
}

int areaoft(int l,int b){
	 	
		int A=b*l;  
    	return A;
	
}
int perioft(int l,int b){
	
    	int P=2*(l+b);    
		 
    	return P;
	
}
int areaofc(int r){
	
    	int C=2*(22/7)*r;       
    	return C;
	
}
int cirofc(int r){
	
		int AC=2*r*r;   
    	return AC;
	
}


