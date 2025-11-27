#include<stdio.h>
void main(){
	int num=121,r,a,rev=0;
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
