#include <stdio.h>

int main() {
    int ціле = 123;
    float дробове = 456.789;
    char символ = 'A';
    long довге = 987654321L;

    printf(" %d\n", ціле);
    printf(" %+d\n", ціле);
    printf(" %10d\n", ціле);
    printf(" %+10d\n", ціле);
    printf(" %010d\n", ціле);
    printf(" %+010d\n", ціле);
    printf(" %f\n", дробове);
    printf(" %+f\n", дробове);
    printf("%c\n", символ); 
  	printf("%ld\n", довге); 
  	printf("%+ld\n", довге); 
  	printf("%15ld\n", довге); 
  	printf("%+15ld\n", довге); 
}
