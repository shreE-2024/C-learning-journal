//Accept array and print only prime numbers of array.

#include<stdio.h>
#include<stdlib.h>
void alternum(int* arr,int n);
void main(){
	int n,i;
	printf("Enter the Size of array :");
	scanf("%d",&n);
	int* arr=(int*) malloc(sizeof(int)*n);
	int* even=(int*) malloc(sizeof(int)*n);
	int* odd==(int*) malloc(sizeof(int)*n);;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	
	alternum(arr,n);
	
	
	free(arr);
	free(even);
	free(odd);

}
void alternum(int* arr,int n){
	int i;
	
	
		for(i=1;i<n;i++){
		
		if(arr[i]==2||arr[i]==3||arr[i]==5||arr[i]==7){
			
			printf(" %d",arr[i]);
			
		}
		if(arr[i]%2!=0&&arr[i]%3!=0&&arr[i]%5!=0&&arr[i]%7!=0){
			
			printf(" %d",arr[i]);
			
		}
		
	}
		
		
	

}
