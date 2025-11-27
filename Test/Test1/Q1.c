// Accept year and print the days of feb
#include<stdio.h>
void main(){
	int year=1600;
	printf("%d year Days in Feb Month is %d",year,(year%100==0)?(year%400==0)?29:28:(year%4==0)?29:28);
}
