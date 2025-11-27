#include <stdio.h>

int main() {
    char op = '*';
    int n1 = 10, n2 = 20, x;

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
    return 0;
}

