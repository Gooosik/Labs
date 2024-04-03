#include <stdio.h>
void main(void)
{
    float var1, var2;
    printf("Enter the first number (var1): ");
    scanf("%f", &var1);
    printf("Enter the second number (var2): ");
    scanf("%f", &var2);
    
    printf("var1 > var2 is %d\n", var1 > var2);
    printf("var1 < var2 is %d\n", var1 < var2);

    printf("var1 == var2 is %d\n", var1 == var2);
    printf("var1 >= var2 is %d\n", var1 >= var2);
    printf("var1 <= var2 is %d\n", var1 <= var2); 
    printf("!var1 is %d\n", !var1); 
    printf("!var1 is %d\n", !var1); 
    printf("var1 || var1 is %d\n", var1 || var1); 
    printf("var1 && var1 is %d\n", var1 && var1); 

}
