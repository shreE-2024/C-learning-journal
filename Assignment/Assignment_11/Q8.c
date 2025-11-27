//WAP to Calculate the Number of Words Present in a String

#include<stdio.h>
void main(){
  int n,i,check=1;
	char a;
	printf("Enter the size of string :");
	scanf("%d",&n);
	fflush(stdin);
	
	char str[n];
	printf("Enter the String :");
	fgets(str,(n+1),stdin);
	a=' ';
	
	for(i=0;str[i]!='\0';i++){
		
		if(str[i]==a){
			
			check++;
		}
			
		
	}
	(str[0]=='\0'||'\n')?printf("0"):printf("\n %d",check);
		
}
