//factorial of range
#include<stdio.h>

void main(){
	int n1,n2,i;
	printf("Enter the range :");
	scanf("%d%d",&n1,&n2);
	
	for(;n1<=n2;n1++){
		printf("%d =",n1);
		for(i=1;i<=n1;i++){
			if(n1%i==0){
				printf("%d, ",i);
			}
			
		}
		printf("\n");
	}
}
