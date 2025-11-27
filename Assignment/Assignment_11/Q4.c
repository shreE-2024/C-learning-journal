//WAP to Form a New String where the First Character and the Last Character have been Exchanged

#include<stdio.h>

void main(){
	int n,i,temp;
	
	printf("Enter the size of string :");
	scanf("%d",&n);
	fflush(stdin);
	
	char str[n];
	printf("Enter the String :");
	fgets(str,(n+1),stdin);
	
	temp=str[0];
	str[0]=str[n-1];
	str[n-1]=temp;
	
	
				
		
	
	printf("\n %s",str);
		
}
