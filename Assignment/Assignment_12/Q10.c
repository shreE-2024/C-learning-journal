//Sort the array

#include<stdio.h>
#include<stdlib.h>
void sortarray(int*,int);
void main(){
	int n,i;
	printf("Enter the Size of array :");
	scanf("%d",&n);
	int* arr=(int*) malloc(sizeof(int)*n);;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	sortarray(arr,n);
	

	for(i=0;i<n;i++){
		printf(" %d",arr[i]);
	}
	
	free(arr);
}

void sortarray(int* arr,int n){
	
	int i,j,temp;
	
	for(i=0;i<n-1;i++){
		
		for(j=i+1;j<n;j++){
		if(arr[i]>arr[j]){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		
		}
	}
}

}
