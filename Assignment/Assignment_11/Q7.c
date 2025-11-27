//WAP to Remove the Characters of Odd Index Values in a String

#include<stdio.h>

void main(){
	int n,i,check=0;
	
	printf("Enter the size of string :");
	scanf("%d",&n);
	fflush(stdin);
	
	char str[n];
	printf("Enter the String :");
	fgets(str,n+1,stdin);
	
	for(i=0;str[i]!='\0';i++){
		if(i%2==1){
			
			check++;
		}
			
		str[i]=str[i+check];
	}
	
	printf("%s",str);
	
}
