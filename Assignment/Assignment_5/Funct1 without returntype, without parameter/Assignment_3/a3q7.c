#include<stdio.h>

void factnum();
void main(){
	
	factnum();
}
void factnum(){
	
		int a=5,b=0,sum=1;
	while(a!=b){
		//printf("%d \n",a);
		sum=sum*a;
		a--;
	}
	printf("Factorial if given numbr is : %d \n",sum);

}
