#include<stdio.h>
void var(int*);
void main(){
	int a=10;
	int* ptr;
	ptr=&a;
	printf("%d \n",a);
	printf("%d \n",ptr);
	printf("%d \n",*ptr);
	var(ptr);
}
void var(int* ptr){
	printf("%d \n",ptr);
	printf("%d \n",*ptr);
	
}
