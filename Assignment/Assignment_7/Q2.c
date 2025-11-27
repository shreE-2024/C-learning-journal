//Search the given number in array.
// Find minimum and maximum number in array
#include<stdio.h>
void main(){
	int n,i,search,check=0;
	printf("Enter the Size of array :");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the Number you want to search :");
	scanf("%d",&search);
	
	for(i=0;i<n;i++){
		if(arr[i]==search){
			printf("The given search number is present on %d position in array \n",i+1);
			check=1;
		}
		
		
	}
	if(check==0){
		printf("The number is not prasent in Array");
	}

}
