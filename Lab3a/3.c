#include <stdio.h>
#define TRUE 1
#define FALSE 0

int main(void)
{
    int x, y, z;
    x = 2; y = 1; z = 0;
    x = x && y || z;  // Оператори && та || виконуються зліва направо
    printf("%d\n", x);  // Результат: 1

    x = 2; y = 1; z = 0;  // Перевстановлюємо значення змінних
    x = (x && y) || z;  // Тепер управляємо порядком за допомогою дужок
    printf("%d\n", x);  // Результат: 1 (так як x && y = TRUE)
    
    return 0;
}
