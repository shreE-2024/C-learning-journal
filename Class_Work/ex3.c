#include<stdio.h>

int sum0fdigit(int);
void main(){
	
	int num;
	
	printf("Enter the number :");
	scanf("%d",&num);
	
	while(num>9)
	{
		num=sum0fdigit(num);
	}
	printf("%d",num);
}

int sum0fdigit(int num){
	int no=num;
	for(;;){
		for(i=0;i<1;i++){
			res=num%10;
			num=num/10;
		}
		res=()?:
	}
	
}
