#include<stdio.h>
void main(){
	int n1,n2;
	printf("Enter two numbers :");
	scanf("%d%d",&n1,&n2);
	for(;n1<=n2;n1++){
		//printf("%d",n1);
		if(n1<=7){
		
		if(n1==2||n1==3||n1==5||n1==7){
			printf("%d \n",n1);
		}
		
		}
		else{
		if(n1%2==0||n1%3==0||n1%5==0||n1%7==0){
			//printf("%d",n1);
		}
		else{
			printf("%d \n",n1);
					
		}
	
		}		
	}
}
