#include<stdio.h>
int main(){
	int year=1700;
	int c=year%4==0&&year%100!=0||year%400==0;
	printf("if and will 0 then not a leap year\n or 1 then it is a leap year \n");
	printf("%d",c);
	return 0;
}
