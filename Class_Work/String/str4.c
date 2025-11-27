#include<stdio.h>

int checkab(char*);
void main(){
	char a[]="abkdxfeajgrb";
	char x[]="pinfgabkdxfeajgr";
	(checkab(a)==1)?printf("\n Given string having b after 3 letter of a: True"):printf("\n Given string having b after 3 letter of a: False");
	
	(checkab(x)==1)?printf("\n Given string having b after 3 letter of a: True"):printf("\n Given string having b after 3 letter of a: False");
}

int checkab(char* a){
	int i=0;
	while(a[i]!='\0'){
		if(a[i]=='a'){
			if(a[i+4]=='b')
			return 1;
		}
		i++;
	}
	return 0;
}


