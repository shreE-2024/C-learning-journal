#include<stdio.h>

void strongnum();
void main(){
	
	strongnum();
	
	
}

void strongnum(){
	int num,r,a,b=0,fact,str=0;
	printf("Enter the Number :");
	scanf("%d",&num);
	while(num!=0){
		fact=1;
		r=num%10;
		a=r;
		while(a!=b){
			fact=fact*a;
			a--;
		}
		str=str+fact;
		num=num/10;
	}
	printf("Strong of given numbr is : %d \n",str);
}
