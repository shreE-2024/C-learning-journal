#include<stdio.h>
void main(){
	
	int a=10;
	int* ptr;
	ptr=&a;
	int c=&a;
	printf("a = %d \n",a);
	printf("ptr = %d \n",ptr);
	printf("c = %d \n",c);
	printf("ptr = %u \n",ptr);
	printf("c = %u \n",c);
	*ptr=20;
	printf("a = %d \n",a);
	ptr=20;
	printf("a = %d \n",a);
	printf("ptr = %d \n",ptr);
	printf("ptr = %d \n",*ptr);
		
}
