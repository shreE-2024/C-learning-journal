#include<stdio.h>

void number(int*);
void main(){
	int a=1;
	number(&a);
	
}
void number(int* a){
	
	while((*a)<=10){
		printf("%d \n",(*a));
		(*a)++;
	}
}
