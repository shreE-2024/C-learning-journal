//Write a program to check the string is palindrome or not.

#include<stdio.h>
void main(){
  int n,i,j,check=0;
	
	printf("Enter the size of string :");
	scanf("%d",&n);
	fflush(stdin);
	
	char str1[n];
	printf("Enter the String :");
	fgets(str1,(n+1),stdin);
	
	
	for(i=0,j=n-1;str1[i]!='\0';i++,j--){
		
		if(str1[i]!=str1[j]){
			
			printf("String are not palindrom ");
			check=1;
		}
			
		
	}
	if(check!=1){
			
			printf("String are palindrom ");
			
		}
		

}
