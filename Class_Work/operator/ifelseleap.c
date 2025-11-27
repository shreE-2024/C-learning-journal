#include<stdio.h>
int main(){
	int year=1700;
	int c=year%4==0&&year%100!=0||year%400==0;
	
	if(c==1){
		printf(" it is a leap year \n");
	}
	else{
		printf("ii is not a leap year\n");
	}
	
	}
