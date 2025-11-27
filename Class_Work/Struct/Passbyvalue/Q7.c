//Time (hour, min, sec)

#include<stdio.h>

struct Time{
	int hr;
	int min;
	int sec;
};
void main(){
	struct Time t1;
	printf("Enter Hour :");
	scanf("%d",&t1.hr);
	printf("Enter Minute :");
	scanf("%d",&t1.min);	
	printf("Enter Second :");
	scanf("%d",&t1.sec);
		
	struct Time t2;
	
	t2.hr=12;
	t2.min=05;	
	t2.sec=20;

			
	printf("\n ...User define in Info... \n");
	printf("\n ---------------------------------------------- \n");
	printf("   %d : %d : %d \n",t1.hr,t1.min,t1.sec);
	
	printf("\n ---------------------------------------------- \n");
	printf("\n\n\n ...Build in Info... \n");
	printf("\n ---------------------------------------------- \n");
	printf("   %d : %d : %d \n",t2.hr,t2.min,t2.sec);
	
}
