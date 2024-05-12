#include <stdio.h>
#include <math.h>

int main() {
    int N = 32;
    double y, max = 0, min = INFINITY;

    printf("i\t\t y\n");
    for (int i = 0; i <= 31; i++) {
        y = pow(i, 2) * exp(-pow(i, 2) / 100) * sin((2 * M_PI * i) / N);
        printf("%d\t\t %f\n", i, y);
        if (y > max) max = y;
        if (y < min) min = y;
    }

    printf("Max y: %f\n", max);
    printf("Min y: %f\n", min);

    return 0;
}
