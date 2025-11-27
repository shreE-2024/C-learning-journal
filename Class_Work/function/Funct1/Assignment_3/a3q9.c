#include<stdio.h>

void palinnum();
void main(){
	palinnum();
	
	
}

void palinnum(){
	int num,r,a,rev=0;
	printf("Enter the Number :");
	scanf("%d",&num);
	int check=num;
	while(num!=0){
		a=num;
		r=num%10;
		while(a!=1){
			r=r*10;
			a=a/10;
		}
		rev=rev+r;
		num=num/10;
		
	}
	(rev==check)?printf("Number is palindrome Number"):printf("Number is Not palindrome Number");

}
