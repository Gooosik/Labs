// Префіксний та постфіксний
// інкремент ++ і декремент --
#include <stdio.h>

int main()
{
    int n = 1;
    printf("n=%d \n",n);
    
    // n++;
    printf("prefix:   ++n=%d\n",++n);
    printf("postfix:  n++=%d\n",n++);
    printf("after-postfix: n=%d\n",n);
    
    // n--;
    printf("prefix:   --n=%d\n",--n);
    printf("postfix:  n--=%d\n",n--);
    printf("after-postfix: n=%d\n",n);
}
