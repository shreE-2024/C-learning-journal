#include<stdio.h>
void main(){
	int cap;
	int check=cap;
	printf("%u \n Enter the given Caption :",check);
	scanf("%d",&cap);
	if(check==cap){
		printf("Successfully Login");
	}
	else{
		printf("Wrong caption");
	}
}
