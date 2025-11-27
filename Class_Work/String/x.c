#include<stdio.h>
#include<string.h>
char* remchar(char*,char);
void main(){
	char str[]="Firstbit Solution";
	printf("%d\n",strlen(str));
	printf("%s",remchar(str,'S'));
}
char* remchar(char* str,char a){
	int i,check=0;
	
	
	for(i=0;str[i]!='\0';i++){
		
		if(str[i]==a){
			check=1;
			
		}
		
		str[i]=str[i+check];
		
		
		
		//printf("%c",str[n]);
		
	}
	return str;
}
