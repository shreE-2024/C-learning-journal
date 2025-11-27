//Take two array and add sum in third array

#include<stdio.h>
void main(){
	int n,i;
	printf("Enter the Size of array :");
	scanf("%d",&n);
	int arr1[n],arr2[n];
	printf("Enter the First Array:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr1[i]);
	}
	printf("Enter the Second Array:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr2[i]);
	}

	printf("Sum of Both Array is:\n");	
	
	for(i=0;i<n;i++){
		
		
			
			printf(" %d",arr1[i]+arr2[i]);
			
		
		
	}
	

}
