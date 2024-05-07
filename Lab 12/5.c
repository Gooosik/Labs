#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int magic;
    int guess;
    magic=rand();
    printf("vgaday chuslo:");
    scanf("%d",&guess);
    if(guess==magic){
        printf("**virno**");
        printf("magichne chuslo rivne %d",magic);
    }
    
    else {
        printf("nevirno\n");
        while (guess!=magic){
            printf("vgaday chuslo:");
            scanf("%d",&guess);
            printf("nevirno\n");
        }
        
     }
}
