#include<stdio.h>
void main(){
	int a=19;
	int* ptr;
	ptr=&a;
	printf("%d \n",a);
	printf("%d \n",*ptr);
	printf("%u \n",ptr);
	*(ptr+1)=20;
	printf("%u \n",*(ptr+1));
}
