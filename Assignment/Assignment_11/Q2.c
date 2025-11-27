//WAP Replace all Occurrences of ‘a’ with $ in a String

#include<stdio.h>

void main(){
	int n,i,check=0;
	char a;
	printf("Enter the size of string :");
	scanf("%d",&n);
	fflush(stdin);
	
	char str[n];
	printf("Enter the String :");
	fgets(str,(n+1),stdin);
	printf("Enter the Character You want to search :");
	a='a';
	
	for(i=0;str[i]!='\0';i++){
		if(str[i]==a){
			str[i]='$';
			check=1;
		}
			
		
	}
	printf("\n %s",str);
	if(check==0)
	printf("This Character a is not prasent in string");
	
}
