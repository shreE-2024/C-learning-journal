//WAP to Count the Number of Vowels in a String

#include<stdio.h>
void main(){
	int n,i,x=0;
	
	printf("Enter the size of string :");
	scanf("%d",&n);
	fflush(stdin);
	
	char str[n];
	printf("Enter the String :");
	fgets(str,(n+1),stdin);
	
	for(i=0;str[i]!='\0';i++){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
			
			x++;
		}
	}
		printf("Count of Vowels %d",x);
}

