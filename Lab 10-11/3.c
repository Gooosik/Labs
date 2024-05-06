/* Магічне число 3 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int magic;
    int guess;
    magic = rand();
    printf("Vgaday magichne chuslo: ");
    scanf("%d", &guess);

    if (guess == magic) {
        printf("*** Virno ***");
        printf("Magichne chuslo rivne %d\n", magic);
    }
    else {
        printf("*** Nevirno, ");
        if(guess > magic) printf("zanadto veluke\n");
        /* вкладений if */
        else printf("zanadto male\n");
    }
    
return 0;
}
