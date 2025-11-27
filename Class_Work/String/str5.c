#include<stdio.h>

void abc(char* );
void main(){
	
	abc("abc");
	
}

void abc(char* a){
	printf("%c",a[1]);
}
