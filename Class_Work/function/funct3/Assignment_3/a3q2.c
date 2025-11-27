#include<stdio.h>

void table(int);
void main(){
	int a=1;
	table(a);
}
void table(int a){
	
	int t;
	while(a<=10){
		t=2*a;
		printf("2*%d=%d \n",a,t);
		a++;
	}
	
}
