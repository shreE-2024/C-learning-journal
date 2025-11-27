// Create a structure Time with data members as hrs, min, sec. Accept the values of all 
//these members from user and display them. Also perform addition of two time variables 
//and display the result. If sec goes beyond 60, carry it to min etc. Add a method to convert 
//the given time into sec.

#include<stdio.h>

typedef struct Time{
	
	int hr;
	int min;
	int sec;
}Time;
void main(){
	
	Time time1,time;	
	printf("Enter the time First :");

		printf("\n______________________________________________________________\n");
		printf("Enter the Hour :");
		scanf("%d",&time1.hr);
		printf("Enter the Minute :");
		scanf("%d",&time1.min);
		printf("Enter the Second :");
		scanf("%d",&time1.sec);	
		printf("\n--------------------------------------------------------------\n");
	
	printf("Now Enter the time You want to add in it :");
		printf("\n--------------------------------------------------------------\n");
		printf("Enter the Hour :");
		scanf("%d",&time.hr);
		printf("Enter the Minute :");
		scanf("%d",&time.min);
		printf("Enter the Second :");
		scanf("%d",&time.sec);	
		printf("\n______________________________________________________________\n");
	
	time1.sec=time1.sec+time.sec;
	if((time1.sec)>60){
		time1.sec=time1.sec-60;
		time1.min++;
}
	time1.min=time1.min+time.min;
	if((time1.min)>60){
		time1.min=time1.min-60;
		time1.hr++;
	}
	time1.hr=time1.hr+time.hr;
	printf("Calculated Time is :");
		printf("\n______________________________________________________________\n");
		printf("\n Enter the Hour :%d",time1.hr);
		printf("\n Enter the Minute :%d",time1.min);
		printf("\n Enter the Second :%d",time1.sec);	
		
		printf("\n______________________________________________________________\n");
	
}
