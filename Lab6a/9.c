#include <stdio.h>
#include <conio.h>
#define STOP '*'

int main()
{
    char sym;
    sym = getchar();
    while (sym != STOP)
    {
        putchar(sym);
        sym = getchar();
    }
}
