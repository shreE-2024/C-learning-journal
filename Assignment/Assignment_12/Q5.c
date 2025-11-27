//Print alternate elements in array

#include<stdio.h>
#include<stdlib.h>
void alternum(int*,int);
void main(){
	int n,i;
	printf("Enter the Size of array :");
	scanf("%d",&n);
	int* arr=(int*) malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	alternum(arr,n);
	
	free(arr);

}
void alternum(int* arr,int n){
	int i;
	
	
	for(i=0;i<n;i++){
		
		if(arr[i]%2==0){
			
			printf(" %d",arr[i]);
			
		}
		
	}
	for(i=0;i<n;i++){
		
		if(arr[i]%2!=0){
			
			printf(" %d",arr[i]);
			
		}
		
	}
		
		
	

}
