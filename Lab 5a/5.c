#include <stdio.h>
#include <math.h>

int main() {
    long double P = 1.0;
    int N;

    printf("N: ");
    scanf("%d", &N);

    for (int k = 1; k <= N; ++k) {
        P *= (1.0 - (k * k) / (2.0 * k + 1.0));
    }

    printf("P = %.15Lf\n", P);
    return 0;
}
