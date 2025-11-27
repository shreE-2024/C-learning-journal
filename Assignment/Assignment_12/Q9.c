//Reverse the given array

#include<stdio.h>
#include<stdlib.h>
void main(){
	int n,i;
	printf("Enter the Size of array :");
	scanf("%d",&n);
	int* arr=(int*) malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	
	for(i=n-1;i>=0;i--){
		
		printf(" %d",arr[i]);
		
	}
	free(arr);

}
