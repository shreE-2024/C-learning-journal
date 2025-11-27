#include <stdio.h>

int main() {
    char op = 's';
    int pr=789,fp;
    float dis;

    if (op == 's') {
        if (pr>500) {
        	dis = 0.20;
    		}
    	else{
        	dis = 0.10;
    	}
	}
    else{
        if (pr>600) {
        	dis = 0.15;
    		}
    	else{
        	printf("No discount");
    	}
    }

    
	fp=pr-(pr*dis);   

    printf("Total Price = %d \n and given discount is %f \n So final price is :", pr,dis);
    (dis>0)?printf("%d",fp):printf("%d",pr);
    return 0;
}

