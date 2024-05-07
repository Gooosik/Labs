#include<stdio.h>
#include<math.h>

int main() {
    int i = 0; 
    double precision_double = 1.0; 
    long double precision_long_double = 1.0; 


    for (i = 0; precision_double + 1.0 > 1.0; i++) {
        precision_double /= 2.0;
    }
    printf("Dla double:\n");
    printf("Chislo dilen na 2: %6d\n", i);
    printf("Mashunnuy 0: %e\n", precision_double);


    for (i = 0; precision_long_double + 1.0 > 1.0; i++) {
        precision_long_double /= 2.0;
    }
    printf("\nDla long double:\n");
    printf("Chislo dilen na 2: %6d\n", i);
    printf("Mashunnuy 0: %Le\n", precision_long_double);

    return 0;
}
