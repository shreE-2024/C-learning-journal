//Search the given number in array.

#include<stdio.h>
#include<stdlib.h>
void main(){
	int i,n;
	printf("Enter the Size of array :");
	scanf("%d",&n);
	int* arr=(int*) malloc(sizeof(int)*n);;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	
	
	
	i=searchnum(arr,n);
	if(i!=0){
		printf("The given search number is present on %d position in array \n",i);
	}
	else{
		printf("The number is not prasent in Array");
	}
	free(arr);
}
int searchnum(int* arr,int n){
	
	int i,search,check=0;
	printf("Enter the Number you want to search :");
	scanf("%d",&search);
	
	for(i=0;i<n;i++){
		if(arr[i]==search){
			return i+1;
			
		}
	}
	if(check==0){
		return 0;
	}
}
