//Find odd and even among the numbers.

#include<stdio.h>
#include<stdlib.h>
void evenum(int*,int);
void main(){
	int n,i;
	printf("Enter the Size of array :");
	scanf("%d",&n);
	int* arr=(int*) malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}	
	
	evenum(arr,n);
	free(arr);
}

void evenum(int* arr,int n){
	int i,j=0,k=0;
	int even[n],odd[n];
	
	for(i=0;i<n;i++){
		
		if(arr[i]%2==0){
			
			even[j]=arr[i];
			j++;
			
		}else{
			
			odd[k]=arr[i];
			k++;
		}
		
	}
	printf("\n The Even numbers in Array is : ");
	for(i=0;i<j;i++){
		printf(" %d",even[i]);
	}
	
	printf("\n The Odd numbers in Array is :");
	for(i=0;i<k;i++){
		printf(" %d",odd[i]);
	}	
		
	

}
