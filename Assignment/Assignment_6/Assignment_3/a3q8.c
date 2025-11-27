#include<stdio.h>

void strongnum(int,int,int);
void main(){
	int num,b=0,str=0;
	printf("Enter the Number :");
	scanf("%d",&num);
	strongnum(num,b,str);
	
	
}

void strongnum(int num,int b,int str){
	int ,r,a,fact;
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
