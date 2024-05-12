#include <stdio.h>

int main(void)
{
    int x = 99;
    int *p1, *p2;
    p1 = &x;
    p2 = p1;

 
    printf("Znachennya po adresu: %d %d\n", *p1, *p2);
    printf("zNACHENNYA VKAZIVNUKIV: %p %p\n", p1, p2);

    return 0;
}
