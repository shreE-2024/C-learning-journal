#include<stdio.h>

void table();
void main(){
	table();
}
void table(){
	
	int t,a=1;
	while(a<=10){
		t=2*a;
		printf("2*%d=%d \n",a,t);
		a++;
	}
	
}
