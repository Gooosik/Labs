#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int magic;
    int guess;
    int m=1;
    magic=rand();

    printf("vgaday chuslo:");
    scanf("%d",&guess);
    if(guess==magic){
        printf("**virno**");
        printf("magichne chuslo rivne %d",magic);
    }

    else {
        printf("nevirno\n");
        printf("m=%d\n",m);
        while (guess!=magic){
            m++;
            printf("vgaday chuslo:");
            scanf("%d",&guess);
            printf("nevirno\n");
            printf("m=%d\n",m);
        }
     }
}
