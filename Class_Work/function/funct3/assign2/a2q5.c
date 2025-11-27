#include <stdio.h>

void disprise(float pr,float dis);
int main() {
    char op = 's';
    float pr;
    float dis;
    printf("Who are you \n Enter s for student if you are student...");
    scanf("%c",&op);

	printf("Enter your total amount :");
    scanf("%f",&pr);
	
    if (op == 's') {
        if (pr>500) {
        	
        	dis = 0.2;
        	disprise(pr,dis);
        	
    		}
    	else{
        	dis = 0.1;
        	disprise(pr,dis);
    	}
	}
    else{
        if (pr>600) {
        	dis = 0.15;
        	disprise(pr,dis);
    		}
    	else{
        	printf("No discount");
    	}
    }

    
	
}

void disprise(float pr,float dis){
	
	float fp=pr-(pr*dis);   

    printf("Total Price = %f \n and given discount is %f %%\n So final price is :", pr,dis);
    (dis>0)?printf("%f",fp):printf("%f",pr);
}
