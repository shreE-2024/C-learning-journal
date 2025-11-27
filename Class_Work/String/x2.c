#include<stdio.h>
int* remchar(int*,int);
void main(){
	int i,str[7]={1,2,3,4,5,6,7};
	for(i=0;i<7;i++){
		printf("%d ",str[i]);
	
	}
	printf("\n");
	int *str1=remchar(str,5);
	for(i=0;i<7-1;i++){
		printf("%d ",str[i]);
	
	}
	
}
int* remchar(int* str,int a){
	int i,check=0;
	
	
	for(i=0;str[i]<7;i++){
		
		if(str[i]==a){
			check=1;
			
			
		}
		
		str[i]=str[i+check];
		
		
		
		//printf("%c",str[n]);
		
	}
	return str;
}
