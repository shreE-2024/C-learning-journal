#include <stdio.h>

int operation(char,int,int);
void main() {
	char op ;
    int n1, n2;
    
    printf("Enter which operation you want to perform :");
    scanf("%c",&op);
    printf("Enter two numbers :");
    scanf("%d%d",&n1,&n2);
    
    
    printf("Solution is = %d \n and given Operation is %c\n", operation(op,n1,n2), op);
}

int operation(char op,int n1,int n2){
	
	//int x;
    

    if (op == '+') {
        return n1 + n2;
    }
    else if (op == '-') {
        return n1 - n2;
    }
    else if (op == '*') {
        return n1 * n2;
    }
    else if (op == '/') {
        if (n2 != 0) {
            return n1 / n2;
        } else {
            printf("Division by zero is not allowed.\n");
            
        }
    }
    else if (op == '%') {
        if (n2 != 0) {
            return n1 % n2;
        } else {
            printf("Division by zero is not allowed.\n");
            
        }
    }
    else {
        printf("Invalid operator\n");
        
    }

    //printf("Solution is = %d \n and given Operation is %c\n", x, op);
    
	
}

