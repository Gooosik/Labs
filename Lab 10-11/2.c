/*Магічне число 2*/
#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
    int magic;
    int guess;
    magic = rand();
    printf("Vgaday magichne chislo: ");
    scanf("%d", &guess);
    if(guess == magic) printf("**Virno**");
    else printf("Nevirno");
    return 0;
}