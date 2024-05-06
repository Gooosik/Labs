/*Магічне число*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    int magic;
    int guess;
    magic = rand();
    printf("Vgaday magichne chislo: ");
    scanf("%d", &guess);
    if(guess == magic) printf("**Virno**");
    return 0;
}