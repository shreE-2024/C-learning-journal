//power of number by given by user

#include<stdio.h>

int functpower(int num,int pwr);
void main(){
	int num,pwr;
	printf("Enter the number :");
	scanf("%d",&num);
	printf("Enter how many power you want :");
	scanf("%d",&pwr);
	num=functpower(num,pwr);
	
	printf("power of given number is :%d",num);
}
int functpower(int num,int pwr){
	int i;
	for(i=1;i<pwr;i++){
		num=num*num;
	}
	return num;
}
