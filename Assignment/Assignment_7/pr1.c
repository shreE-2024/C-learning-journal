//Reverse the given array

#include<stdio.h>
int* revarr(int*,int);
void main(){
	int n,i;
	printf("Enter the Size of array :");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	int* brr=revarr(arr,n);
	for(i=0;i<n;i++){
		
		printf(" %d",brr[i]);
		
	}
	
	
	
}

int* revarr(int* arr,int n){
	int i,j;
	int* brr=(int*)malloc(sizeof(int)*n);
	
	for(i=n-1,j=0;i>=0;j++,i--){
		
		brr[i]=arr[j];
		
	}
	return brr;
}
