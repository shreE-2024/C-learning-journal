//Write a program to scan string from user then scan a single character and search it in a accepted string.

#include<stdio.h>

void main(){
	int n,i,check=0;
	char a;
	printf("Enter the size of string :");
	scanf("%d",&n);
	fflush(stdin);
	
	char str[n];
	printf("Enter the String :");
	fgets(str,n+1,stdin);
	printf("Enter the Character You want to search :");
	a=getch();
	printf("%c",a);
	for(i=0;str[i]!='\0';i++){
		if(str[i]==a){
			printf("\n\n %c character is present on %d position ",a,i);
			check=1;
		}
			
		
	}
	if(check==0)
	printf("This Character is not prasent in string");
	
}
