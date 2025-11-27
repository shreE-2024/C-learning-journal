#include<stdio.h>
#include<string.h>
char* mystrstr(char*,char*);
void main(){
	
	char str3[]="Firstbit Solution";
	
	printf("mystrstr(str3,'bit') : %s \n",mystrstr(str3,"Sol"));
	char str4[]="Firstbit Solution";
	printf("strstr(str4,'bit') : %s \n",strstr(str4,"Sol"));
	
	
}
	char* mystrstr(char* str3,char* str){
		int i=0,j=0,check;
		for(i=0;str3[i]!='\0';i++){
			
			if(str[0]==str3[i]){
				check=0;
				for(j=1;str[j]==str3[i+j];j++){
					}
				if(str[j]=='\0'){
						check=1;
					}
				if(check==1){
				
					return &str3[i];
					
				}
			}
	}
	
	return NULL;
	
}
