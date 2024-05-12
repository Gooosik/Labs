#include <stdio.h>

int main() {
    int arr[5]; 
    int *ptr = arr; 
    int sum = 0;

    printf("Vedit chislo:\n");

        for (int i = 0; i < 5; i++) {
        scanf("%d", ptr + i);     }

    // Обчислення суми елементів масиву
    for (int i = 0; i < 5; i++) {
        sum += *(ptr + i); 
    }

    printf("Result: %d\n", sum);

    return 0;
}
