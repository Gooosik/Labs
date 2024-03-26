#include <stdio.h>
#include <string.h>

#define PRAISE "О, яке чудове ім'я!"

int main() {
    char name[50];
    printf("Як Вас звати?\n"); 
    scanf("%s", name);
    printf("Привіт, %s. %s\n", name, PRAISE); // Використано макрос PRAISE
    printf("Ваше ім'я складається з %lu літер і займає %lu комірок пам'яті.\n", strlen(name), sizeof(name)); // Замінено %d на %lu для типу size_t
    printf("Вигадана фраза складається з %lu літер і займає %lu комірок пам'яті.\n", strlen(PRAISE), sizeof(PRAISE)); // Замінено %d на %lu для типу size_t
    return 0;
}
