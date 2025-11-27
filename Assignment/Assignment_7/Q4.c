//Find odd and even among the numbers.

#include<stdio.h>
void main(){
	int n,i,j=0,k=0;
	printf("Enter the Size of array :");
	scanf("%d",&n);
	int arr[n],even[n],odd[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	
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
