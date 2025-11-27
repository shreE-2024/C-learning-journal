#include<stdio.h>

void checknum(int);
void greternum(int);
void main(){
	
	int num;
	{
		printf("Enter the number :");
		scanf("%d",&num);
		
		
			greternum(num);
	
	}
	
}

void greternum(int num){
	
	int res1;
	int res2;
	int res3;
	int res4,temp;
	
	for(;num>0;num=num/100){
			
			int no=num%100;
			res4=checknum(no);
			temp=res4;
			res3=res2;
			res2=res1;
			res1=temp;
			
			
	
			//printf("%d \n",no);
			}
}
void checknum(int no){
	
	int a;
	int res1=res2;
	int res2=res3;
	int res3=res4;
	int res4=(no>a)?no:a;
	while(no>9){
		a=no%10;
		no=no/10;
	}
	return (no>a)?no:a;
	
	
	
}
		

