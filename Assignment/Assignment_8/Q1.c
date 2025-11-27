// Find minimum and maximum number in array
#include<stdio.h>
int greatest(int*,int);
int smallest(int*,int);

void main(){
	int n,i,great,small;
	printf("Enter the Size of array :");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	
	
	great=greatest(arr,n);
	small=smallest(arr,n);
	for(i=0;i<n;i++){
		
		if(arr[i]<small){
			small=arr[i];
		}
	}
	printf("Smallest number in array is :%d \n",small);
	printf("Greatest number in array is :%d \n",great);
}

int greatest(int* arr,int n){
	
	int i,great=arr[0];
	
	for(i=0;i<n;i++){
		if(arr[i]>great){
			great=arr[i];
		}
		
	}
	return great;
}
int smallest(int* arr,int n){
	int i,small=arr[0];
	for(i=0;i<n;i++){
		
		if(arr[i]<small){
			small=arr[i];
		}
	}
	return small;
}
