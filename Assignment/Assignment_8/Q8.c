// Merge two arrays

#include<stdio.h>
int* meargeofarry(int*,int*,int*,int,int,int);
void main(){
	int n1,n2,i;
	printf("Enter the Size of array :");
	scanf("%d",&n1);
	int arr1[n1];
	printf("Enter the First Array:\n");
	for(i=0;i<n1;i++){
		scanf("%d",&arr1[i]);
	}
	printf("Enter the Size of array :");
	scanf("%d",&n2);
	int arr2[n2];
	printf("Enter the Second Array:\n");
	for(i=0;i<n2;i++){
		scanf("%d",&arr2[i]);
	}
	int n=n1+n2;
	int arr[n];
	meargeofarry(arr,arr1,arr2,n,n1,n2);
	printf("Merge of Both Array is:\n");	
	
	for(i=0;i<n;i++){
		
		
			
			printf(" %d",arr[i]);
			
		
		
	}
	

}
int* meargeofarry(int* arr,int* arr1,int* arr2,int n,int n1,int n2){
	int i,j;
	for(i=0;i<n1;i++){
		
			arr[i]=arr1[i];
			
	
	}
	for(j=0;j<n;j++,i++){
		
		
			arr[i]=arr2[j];
			
		
		
	}
		
	return arr;

}
