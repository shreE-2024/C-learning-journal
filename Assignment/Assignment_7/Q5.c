//Print alternate elements in array

#include<stdio.h>
void main(){
	int n,i;
	printf("Enter the Size of array :");
	scanf("%d",&n);
	int arr[n],even[n],odd[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	
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
