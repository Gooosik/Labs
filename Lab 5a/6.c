#include <stdio.h>
#include <math.h>

double calculateSeries(double x, double precision) {
    double sum = cos(x);
    double term;
    int n = 0;

    do {
        n++;
        term = pow(x, 2 * n) / tgamma(2 * n + 1);
        sum += term;
    } while (term > precision);

    return sum;
}

int main() {
    double x, result;
    const double precision = 0.00001;

    printf("Napushu chislo: ");
    scanf("%lf", &x);

    result = calculateSeries(x, precision);

    printf("y = %lf\n", result);

    return 0;
}
