//WAP to Remove the nth Index Character from a Non-Empty String

#include<stdio.h>

void main(){
	int n,i,check=0;
	int c;
	printf("Enter the size of string :");
	scanf("%d",&n);
	fflush(stdin);
	
	char str[n];
	printf("Enter the String :");
	fgets(str,(n+1),stdin);
	printf("Enter the index You want to delete :");
	scanf("%d",&c);
	
	for(i=0;str[i]!='\0';i++){
		if((i)==c){
			
			check=1;
		}
		str[i]=str[i+check];
			
		
	}
	printf("\n %s",str);
	if(check==0)
	printf("This index is not prasent in string");
	
}
