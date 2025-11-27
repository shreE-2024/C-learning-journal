#include<stdio.h>
void main(){
	int num=1634,r,sum=0,r1;
	int t=0,no=num,a;
	int check=num;
	while(no!=0){
		t++;
		no=no/10;
		
	}
	while(num!=0){
		r=num%10;
		r1=r;
		a=t;
		while(t>1){
			r=r*r1;
			//printf("%d \n",r);
			t--;
		}
		t=a;
		sum=sum+r;
		num=num/10;
		//printf("sum= %d \n",sum);
	}
	(sum==check)?printf("Number is Armstrong Number"):printf("Number is Not Armstrong Number");

	
}
