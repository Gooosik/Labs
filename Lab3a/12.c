#include <stdio.h>

int main()
{
    char x = 255, y = 0177; 
    printf("%u\n", (unsigned char)(x & y)); 
    x = 'm'; y = 017; 
    printf("%u\n", (unsigned char)(x & y)); 
    y = 127;  
    printf("%u\n", (unsigned char)(x & y)); 
    y = 128;  
    printf("%u\n", (unsigned char)(x | y)); 

    return 0;
}
