#include <stdio.h>

void operation(int*,char*);
void main() {
    char op = '*';
    int n1, n2, x;
    
    printf("Enter Operator which operation you want perform :");
    scanf("%c",&op);
    printf("Enter Two numbrs :");
    scanf("%d%d",&n1,&n2);
    
    

    if (op == '+') {
    	
    	x = n1 + n2;
    	operation(&x,&op);
    	
        
    }
    else if (op == '-') {
        x = n1 - n2;
        operation(&x,&op);
    }
    else if (op == '*') {
        x = n1 * n2;
        operation(&x,&op);
    }
    else if (op == '/') {
        if (n2 != 0) {
            x = n1 / n2;
            operation(&x,&op);
        } else {
            printf("Division by zero is not allowed.\n");
            return 1;
        }
    }
    else if (op == '%') {
        if (n2 != 0) {
            x = n1 % n2;
            operation(&x,&op);
        } else {
            printf("Division by zero is not allowed.\n");
            return 1;
        }
    }
    else {
        printf("Invalid operator\n");
        
    }

    
    return 0;
}
void operation(int* x,char* op){
	
	printf("Solution is = %d \n and given Operation is %c\n", *x, *op);
	
}
