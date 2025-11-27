//WAP to Take in Two Strings and Display the Larger String without Using Built-in Functions

#include<stdio.h>
void main(){
  int n1,n2,i;
	
	printf("Enter the size of string :");
	scanf("%d",&n1);
	fflush(stdin);
	
	char str1[n1];
	printf("Enter the String :");
	fgets(str1,(n1+1),stdin);
	
	printf("Enter the size of string :");
	scanf("%d",&n2);
	fflush(stdin);
	
	char str2[n2];
	printf("Enter the String :");
	fgets(str2,(n2+1),stdin);
	
	for(i=0;str1[i]!='\0'||str2[i]!='\0';i++){
		
		if(str1[i]=='\0'){
			
			printf("String Sencond are greter :%s",str2);
		}
		else{
			if(str1[i]=='\0'){
			
			printf("String First are greter :%s",str1);
		}
		else{
			if(str1[i]=='\0'&&str2[i]=='\0'){
			
			printf("Both String are Equal ");
		}
		}
			
		
	}
		
}
}
