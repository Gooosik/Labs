#include <stdio.h>

int main()
{
    unsigned int x = 2, y = 1, z = 3, res;
    char chx = 0xAF;
    printf("%u\n", x & y & z);          /*3*/
    x = y = z = 2;
    printf("%u\n", x & y & z);          /*2*/
    x = 3; y = 0; z = 1;
    printf("x*y*z=%u\n", x * y * z);   /*0*/
    printf("3|0=%u\n", x | y);         /*3*/
    x = 1; y = z = 0;
    printf("1&2|0=%u\n", x & y | z);   /*0*/
    printf("1^2^0=%u\n", ~x ^ y ^ z);  /*65534==11111110*/
    printf("2|0&1=%u\n", y | x && z);  /*2*/
    printf("(21+8+6+5)^(7-3)= %d\n", (21 + 8 + 6 + 5) ^ (7 - 3));  /*65534==11111110*/
    printf("(FF)80 ==10000000*\n");   //(FF)80 ==10000000*

    chx = (~7);
    printf("%X%X\n", chx, chx);

    return 0;
}
