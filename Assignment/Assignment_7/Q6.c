//Accept array and print only prime numbers of array.

#include<stdio.h>
void main(){
	int n,i;
	printf("Enter the Size of array :");
	scanf("%d",&n);
	int arr[n],even[n],odd[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	
	for(i=1;i<n;i++){
		
		if(arr[i]==2||arr[i]==3||arr[i]==5||arr[i]==7){
			
			printf(" %d",arr[i]);
			
		}
		if(arr[i]%2!=0&&arr[i]%3!=0&&arr[i]%5!=0&&arr[i]%7!=0){
			
			printf(" %d",arr[i]);
			
		}
		
	}
	
	

}
