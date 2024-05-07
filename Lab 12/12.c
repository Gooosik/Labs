#include <stdio.h>
#include <math.h>

int main() {
    int N;
    double P = 1.0;
    const double pi = 3.14159265359;

    printf("N: ");
    scanf("%d", &N);

    if (N < 0 || N > pi / 2) {
        printf("ERROR \n");
        return 1; 
    }

    for (int k = 1; k <= N; ++k) {
        P *= (1 - (double)(k * k) / (2 * k + 1));
    }

    printf("P = %f\n", P);
    return 0;
}
