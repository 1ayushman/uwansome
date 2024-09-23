create a file and wite a program for calculator containing 2 operations (+&-) by using linux command and give the name to the folder as calculator devops

#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    printf("Enter an operator (+ or -): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        default:
            printf("Error! operator is not correct\n");
    }

    return 0;
}
