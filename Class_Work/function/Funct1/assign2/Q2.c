#include<stdio.h>

void greatestnum();
void main(){
	
	greatestnum();
	
}
void greatestnum(){
	
	
    int a,b,c;
    
    printf("Enter the Numbers :");
    scanf("%d%d%d",&a,&b,&c);
     
    
    printf("Greatest number is %d \n",(a>b)?(a>c)?a:c:(b>c)?b:c);
	
	
}
