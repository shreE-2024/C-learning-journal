//Take two array and add sum in third array

#include<stdio.h>
#include<stdlib.h>
void sumofarry(int*,int*,int);
void main(){
	int n,i;
	printf("Enter the Size of array :");
	scanf("%d",&n);
	int* arr1=(int*) malloc(sizeof(int)*n);
	int* arr2=(int*) malloc(sizeof(int)*n);;
	printf("Enter the First Array:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr1[i]);
	}
	printf("Enter the Second Array:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr2[i]);
	}
	sumofarry(arr1,arr2,n);
	
	free(arr1);
	free(arr2);

}
void sumofarry(int* arr1,int* arr2,int n){
	int i;
	
	
		printf("Sum of Both Array is:\n");	
	
	for(i=0;i<n;i++){
		
		
			
			printf(" %d",arr1[i]+arr2[i]);
			
		
		
	}
		
		
	

}
