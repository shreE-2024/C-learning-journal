//Find sum of all numbers.

#include<stdio.h>
void main(){
	int n,i,sum=0;
	printf("Enter the Size of array :");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	
	for(i=0;i<n;i++){
	
		sum=sum+arr[i];
		
	}
	
		printf("The Sum of numbers in Array is : %d",sum);
	

}
