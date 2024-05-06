#include <stdio.h>

int main() {
    double num1, num2;
    char operator;

    printf("Vedid 1 chislo: ");
    scanf("%lf", &num1);
    printf("Vedid 2 chislo: ");
    scanf("%lf", &num2);
    printf("Vedit operaciu (+, -, *, /): ");
    scanf(" %c", &operator);

    if (operator == '+') {
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
    } else if (operator == '-') {
        printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
    } else if (operator == '*') {
        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
    } else if (operator == '/') {

        if (num2 != 0) {
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
        } else {
            printf("ERROR\n");
        }
    } else {
        printf("ERROR\n");
    }

    return 0;
}
