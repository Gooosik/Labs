#include <stdio.h>

int main() {
    float a, b, c;
    float discriminant, root1, root2;


    printf("Введіть коефіцієнти квадратного рівняння (a, b, c): ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;


    if (discriminant >= 0) {
        root1 = (-b + discriminant) / (2 * a);
        root2 = (-b - discriminant) / (2 * a);
        printf("Рішення: x1 = %.2f, x2 = %.2f\n", root1, root2);
    } else {
        printf("Рішення: Корені рівняння комплексні.\n");
    }

    return 0;
}
