#include<stdio.h>

int checkab(char*);
void main(){
	char a[]="abkdxfeajgrb";
	printf("given String is : %s",a);
	char x[]="pinfgabkdxfeajgr";
	checkab(a);
	printf("\n Now we pass by +1 each character : %s",a);
}

int checkab(char* a){
	int i=0;
	while(a[i]!='\0'){
		
		a[i]=a[i]+1;
		i++;
	}
	return 0;
}


