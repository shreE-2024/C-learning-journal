#include<stdio.h>

void palinnum(int,int);
void main(){
	int num,rev=0;
	palinnum(num,rev);
	
	
}

void palinnum(int num,int rev){
	int r,a,rev=0;
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
