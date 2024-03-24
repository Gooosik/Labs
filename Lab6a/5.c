#include <stdio.h>

int main() {
    int vik;
    char imya[30];

    printf("Скільки вам років?\n");
    scanf("%d", &vik);

    printf("Введіть ваше ім'я:\n");
    scanf("%s", imya);

    printf("Привіт, %s, вам %d років.\n", imya, vik);

    return 0;
}
