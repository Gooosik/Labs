#include <stdio.h>
#include <math.h>

int main() {
    int i, N = 32;
    double y, max_value = -INFINITY, min_value = INFINITY;

    printf("i\t\t y\n");
    for(i = 0; i <= 31; i++) {
        y = i * exp(-pow(i, 2) / 100.0) * sin(2 * M_PI * i / N);
        printf("%d\t\t %f\n", i, y);

        if(y > max_value) max_value = y;
        if(y < min_value) min_value = y;
    }

    printf("\nMax y: %f\n", max_value);
    printf("Min y: %f\n", min_value);

    return 0;
}
