#include<stdio.h>
#include<math.h>

void main(void) 
{
    int i = 0; 
    float precision = 1.0; 
    
    while (precision > 0.0) {
        precision = precision / 2.;
        i++;
    }
    
    printf("\n chuslo na 2: %6d\n", i);
    printf("Mashynny 0: %e\n ", precision);
    
    double precision_double = 1.0;
    i = 0;
    
    while (precision_double > 0.0) {
        precision_double = precision_double / 2.;
        i++;
    }
    
    printf("\n chuslo na 2: %6d\n", i);
    printf("Mashynny 0: %le\n ", precision_double);
    
    long double precision_long_double = 1.0L;
    i = 0;
    
    while (precision_long_double > 0.0L) {
        precision_long_double = precision_long_double / 2.0L;
        i++;
    }
    
    printf("\n chuslo na 2: %6d\n", i);
    printf("Mashynny 0: %Le\n ", precision_long_double);
}
