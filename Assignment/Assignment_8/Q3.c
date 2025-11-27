//Find sum of all numbers.

#include<stdio.h>

int sumofnum(int*,int);
void main(){
	int n,i;
	printf("Enter the Size of array :");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int sum=sumofnum(arr,n);

	
	
	
		printf("The Sum of numbers in Array is : %d",sum);
	

}

int sumofnum(int* arr,int n){
	int i,sum=0;
	
	
	for(i=0;i<n;i++){
	
		sum=sum+arr[i];
		
	}
	
	
		
	
	return sum;
}
