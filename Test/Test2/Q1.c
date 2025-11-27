//maximum amount of 3 number

#include<stdio.h>

int greatestnum(int,int,int);
void main(){
	
	int a,b,c;
	printf("Enter three numbers :");
	scanf("%d%d%d",&a,&b,&c);
	
	printf(" The greatest Number is :%d ",greatestnum(a,b,c));
}

int greatestnum(int a,int b,int c){
	
	return (a>b)?(a>c)?a:c:(b>c)?b:c;
}
