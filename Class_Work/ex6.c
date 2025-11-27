#include<stdio.h>


void main(){
	
	int num,i,j,digit=0,rem;
	printf("Enter the Number :");
	scanf("%d",&num);
	int no=num;
	printf("%d \n",no);
	for(;no>0;no=no/10){
		digit++;
		//printf("%d \n",digit);
		
	}
	
	
	no=num;
	for(j=0;j<digit;j++){
		rem=no%10;
		
			printf("%d",rem);
		
		no=no/10;
}
printf("\n");
no=num;
	
	for(j=0;j<digit;j++){
		rem=num%10;
		for(i=0;i<digit;i++){
			printf("%d",rem);
		}
		printf("\n");
		num=num/10;
}



for(num=no;num>0;num=num/10){
	
	num
	
}
	
	
	}



			

