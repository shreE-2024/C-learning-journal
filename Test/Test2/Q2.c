//accept Total mark of student and display the gread 

#include<stdio.h>

int totalmark(int);
void main(){
	
	int Total,check=0,ob;
	
	printf("Enter Your total Marks by 600:");
	scanf("%d",&ob);
	
	int per =totalmark(ob);
	
	
	printf("%d%% \n",per);
	
if(per>75){
	
	printf("Grade is A+");
}
else{
if(per>60){
	
	printf("Grade is A");
	
}	
else{
	if(per>45){
	
	printf("Grade is B+");
	
}
else{
	if(Total>35){
	
	printf("Grade is B");
}
}
}
}}

int totalmark(int ob){
	
	return (ob*100)/600;
	
}


	
