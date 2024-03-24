#include <stdio.h>

int main() {
    double a = 100, b = 0.001;
    double result;

    double a_plus_b = a + b;
    double a_plus_b_sq = a_plus_b * a_plus_b;
    double a_plus_b_4 = a_plus_b_sq * a_plus_b_sq;
    
    double a_4 = a * a * a * a;
    double a_3_b = 4 * a * a * a * b;
    double a_2_b_2 = 6 * a * a * b * b;
    
    double numerator = a_plus_b_4 - (a_4 - a_3_b + a_2_b_2);

    double b_3 = b * b * b;
    double b_4 = b * b * b * b;
    
    double denominator = 4 * a * b_3 + b_4;

    result = numerator / denominator;

    printf("Результат виразу: %lf\n", result);

    return 0;
}
