#include<stdio.h>

void greatestnum(int*,int*,int*);
void main(){
    int a,b,c;
     printf("Enter 3 numbers :");
     scanf("%d%d%d",&a,&b,&c);
     greatestnum(&a,&b,&c);
    
    
}
void greatestnum(int* a,int* b,int* c){
	printf("Greatest number is %d \n",((*a)>(*b))?((*a)>(*c))?(*a):(*c):((*b)>(*c))?(*b):(*c));
}
