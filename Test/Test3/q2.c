//alternate number print 
#include<stdio.h>
void main(){
	
	int i,num;
	printf("Enter the first number :");
	scanf("%d",&i);
	printf("Ekter a last number :");
	scanf("%d",&num);
	printf("%d \n",i);
	
	while(i++&&i<num){
		i++;
		printf("%d \n",i);
		
	}
	
}
