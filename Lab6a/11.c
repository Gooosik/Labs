#include <stdio.h>

int main() {
    float price1 = 10.5, price2 = 20.0, price3 = 15.75, price4 = 8.99, price5 = 12.49;
    int quantity1, quantity2, quantity3, quantity4, quantity5;

    printf("Введіть кількість товару 1: ");
    scanf("%d", &quantity1);
    printf("Введіть кількість товару 2: ");
    scanf("%d", &quantity2);
    printf("Введіть кількість товару 3: ");
    scanf("%d", &quantity3);
    printf("Введіть кількість товару 4: ");
    scanf("%d", &quantity4);
    printf("Введіть кількість товару 5: ");
    scanf("%d", &quantity5);

    float total1 = price1 * quantity1;
    float total2 = price2 * quantity2;
    float total3 = price3 * quantity3;
    float total4 = price4 * quantity4;
    float total5 = price5 * quantity5;
    float totalPurchase = total1 + total2 + total3 + total4 + total5;

    printf("\n%10s  %10s  %10s  %10s  %10s  %10s\n", "Товар", "Ціна", "Кількість", "Сума", "Сума (грн)", "Сума (коп)");
    printf("%10s  %10.2f  %10d  %10.2f  %10d  %10d\n", "Товар 1", price1, quantity1, total1, (int)total1, (int)((total1 - (int)total1) * 100));
    printf("%10s  %10.2f  %10d  %10.2f  %10d  %10d\n", "Товар 2", price2, quantity2, total2, (int)total2, (int)((total2 - (int)total2) * 100));
    printf("%10s  %10.2f  %10d  %10.2f  %10d  %10d\n", "Товар 3", price3, quantity3, total3, (int)total3, (int)((total3 - (int)total3) * 100));
    printf("%10s  %10.2f  %10d  %10.2f  %10d  %10d\n", "Товар 4", price4, quantity4, total4, (int)total4, (int)((total4 - (int)total4) * 100));
    printf("%10s  %10.2f  %10d  %10.2f  %10d  %10d\n", "Товар 5", price5, quantity5, total5, (int)total5, (int)((total5 - (int)total5) * 100));

    printf("%48s%10.2f\n", "Загальна сума купівлі (грн): ", totalPurchase);

    return 0;
}
