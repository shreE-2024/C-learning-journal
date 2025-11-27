#include<stdio.h>

int perioft();
int areaoft();
int cirofc();
int areaofc();

void main(){
    int ch;
    
printf("What you want to find \n type 1 to find area of Triangle \n type 1 to find area of Circle \n");
scanf("%d",&ch);
	if(ch==1){
				
		printf("Perimeter = %d \n",perioft());
		printf("Area of Rectangle = %d \n",areaoft());
		
	} 
	else{
		if(ch==2){
		
		printf("Area of Circle = %d\n",cirofc());
		printf("Area of Circle = %d \n",areaofc());
		
	} 
	else{
		printf("Invalid choise.....\n");
	}
	}
    
}

int areaoft(){
	int l,b;
    	printf("Enter the Length :");
    	scanf("%d",&l);
		
		printf("Enter the Breadth :");
    	scanf("%d",&b);
	if(l>0||b>0){    
				
		
		int A=b*l;  
    	return A;
	}
    else{
    	printf("Enter a Length and Bredth be a Non 0 and Possitive value ");
	}	
}
int perioft(){
	int l,b;
    	printf("Enter the Length :");
    	scanf("%d",&l);
		
		printf("Enter the Breadth :");
    	scanf("%d",&b);
	if(l>0||b>0){
    	int P=2*(l+b);    
		 
    	return P;
	}
    else{
    	printf("Enter a Length and Bredth be a Non 0 and Possitive value ");
	}
}
int areaofc(){
	int r;
    	printf("Enter the radious of Circle :");
    	scanf("%d",&r);
	if(r>0){
    	int C=2*(22/7)*r;       
    	return C;
	}
    else{
    	printf("Enter a Radious be a Non 0 and Possitive value ");
	}
}
int cirofc(){
	int r;
    	printf("Enter the radious of Circle :");
    	scanf("%d",&r);
	if(r>0){  
		int AC=2*r*r;   
    	return AC;
	}
    else{
    	printf("Enter a Radious be a Non 0 and Possitive value ");
	}
}


