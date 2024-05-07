#include <stdio.h>
#include <math.h> 

int main() {
    printf("-------------------------------------------------------\n");
    printf("|  Число  |  Квадрат  |   Куб    |  Корінь 4-го порядку |\n");
    printf("-------------------------------------------------------\n");

    for (int i = 1; i <= 20; i++) {
        double square = pow(i, 2); 
        double cube = pow(i, 3); 
        double fourth_root = pow(i, 0.25); 

        printf("|%8d |%10.2f |%10.2f |%20.2f |\n", i, square, cube, fourth_root);
    }

    printf("-------------------------------------------------------\n");

    return 0;
}
