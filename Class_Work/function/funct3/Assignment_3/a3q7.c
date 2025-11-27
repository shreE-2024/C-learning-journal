#include<stdio.h>

void factnum(int,int,int);
void main(){
	
	int a=5,b=0,sum=1;
	
	factnum(a,b,sum);
}
void factnum(int a,int b,int sum){
	
		
	while(a!=b){
		//printf("%d \n",a);
		sum=sum*a;
		a--;
	}
	printf("Factorial if given numbr is : %d \n",sum);

}
