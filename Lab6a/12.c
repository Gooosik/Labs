#include <stdio.h>

#define PI 3.14159265359

int main() {
    float radius;
    float circumference, area;

    printf("Введіть радіус круга: ");
    scanf("%f", &radius);

  
    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    
    printf("Довжина кола: %.2f\n", circumference);
    printf("Площа круга: %.2f\n", area);

    return 0;
}
