#include<stdio.h>
void main(){
	int n1=60,n2=90,a=2,hcm=1,b=2,cm=1,lcm=1;
	//while()
	while(a<n1||a<n2){
		
		if(n1%a==0 && n2%a==0){
		
		hcm=hcm*a;
		n1=n1/a;
		n2=n2/a;
		
	}
	
		a++;
	}
	printf("MCM is : %d \n",hcm);
	while(b<n1||b<n2){
		
		if(n1%b==0 && n2%b==0){
		
		cm=cm*b;
		n1=n1/b;
		n2=n2/b;
		
	}
	
	//printf("%d \n",n1);
	//printf("%d \n",n2);
	b++;
}
lcm=n1*n2*hcm*cm;
printf(" LCM is : %d \n",lcm);
}
