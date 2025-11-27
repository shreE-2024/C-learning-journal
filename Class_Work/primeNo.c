#include<stdio.h>
void main(){
	int i,j=0,num1,num2;
	printf("Enter the range :");
	scanf("%d%d",&num1,&num2);
	int r1=num2/10;
	int arr[r1/2];
	arr[j]=2;
	int k,x=4;
	
	for(;num1<=num2;num1++){
		if(num1!=2 && num1%2!=0){
			for(k=0;k<j;k++){
				if(num1%arr[k]!=0){
					if(arr[j]<num1){
						arr[++j]=num1;
						printf("\n arr : %d",arr[j]);
					}
				}
				
			}
		}
	}
}
