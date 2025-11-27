#include<stdio.h>
void main(){
	int a=5,b=0,sum=1;
	while(a!=b){
		//printf("%d \n",a);
		sum=sum*a;
		a--;
	}
	printf("Factorial if given numbr is : %d \n",sum);
}
