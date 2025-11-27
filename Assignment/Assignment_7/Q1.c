// Find minimum and maximum number in array
#include<stdio.h>
void main(){
	int n,i,great,small;
	printf("Enter the Size of array :");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	great=arr[0];
	small=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]>great){
			great=arr[i];
		}
		if(arr[i]<small){
			small=arr[i];
		}
	}
	printf("Smallest number in array is :%d \n",small);
	printf("Greatest number in array is :%d \n",great);
}
