#include <stdio.h>

void xyz();
int main() {
	
	
	xyz();
    char op;
    int pr,fp;
    
    Printf("Enter s if you are student :");
    scanf("%c",&op);
    Printf("Enter price of product :");
    scanf("%d",&pr);
    
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

void xyz(){
	char op;
    int pr,fp;
    float dis;
    
    printf("Enter s if your student");
    scanf("%c",&op);
    
    printf("Enter the Price :");
    scanf("%d",&pr);

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
}

