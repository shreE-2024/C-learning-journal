#include<stdio.h>

int greatestnum();
void main(){
	
	printf("Greatest number is %d \n",greatestnum());
	
}
int greatestnum(){
	
	
    int a,b,c;
    
    printf("Enter the Numbers :");
    scanf("%d%d%d",&a,&b,&c);
     
    
    return (a>b)?(a>c)?a:c:(b>c)?b:c);
	
	
}
