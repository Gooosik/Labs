#include <stdio.h>
#define TRUE "TRUE"
#define FALSE "FALSE"

int main(void)
{
    float var1, var2;
    printf("Введіть перше число (var1): ");
    scanf("%f", &var1);
    printf("Введіть друге число (var2): ");
    scanf("%f", &var2);

    printf("var1 > var2 є %s\n", var1 > var2 ? TRUE : FALSE);
    printf("var1 < var2 є %s\n", var1 < var2 ? TRUE : FALSE);
    printf("var1 >= var2 є %s\n", var1 >= var2 ? TRUE : FALSE);
    printf("var1 <= var2 є %s\n", var1 <= var2 ? TRUE : FALSE);
    printf("var1 == var2 є %s\n", var1 == var2 ? TRUE : FALSE); 
    printf("var1 != var2 є %s\n", var1 != var2 ? TRUE : FALSE); 
    printf("!var1 && !var2 є %s\n", !var1 && !var2 ? TRUE : FALSE); 
    printf("!var1 || !var2 є %s\n", !var1 || !var2 ? TRUE : FALSE); 

    return 0;
}
