#include <stdio.h>

void operation();
void main() {
    operation();
}

void operation(){
	
	char op ;
    int n1, n2, x;
    
    printf("Enter which operation you want to perform :");
    scanf("%c",&op);
    printf("Enter two numbers :");
    scanf("%d%d",&n1,&n2);
    

    if (op == '+') {
        x = n1 + n2;
    }
    else if (op == '-') {
        x = n1 - n2;
    }
    else if (op == '*') {
        x = n1 * n2;
    }
    else if (op == '/') {
        if (n2 != 0) {
            x = n1 / n2;
        } else {
            printf("Division by zero is not allowed.\n");
            return 1;
        }
    }
    else if (op == '%') {
        if (n2 != 0) {
            x = n1 % n2;
        } else {
            printf("Division by zero is not allowed.\n");
            return 1;
        }
    }
    else {
        printf("Invalid operator\n");
        return 1;
    }

    printf("Solution is = %d \n and given Operation is %c\n", x, op);
    
	
}

