#include <stdio.h>

void draw_rectangle_triangle(int n) {
    int i, j;
    char symbol = 'd'; 
    
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c", symbol); 
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Vedit rozmir trukutnuka: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Rozmir mae butu cilum chislom\n");
        return 1; 
    }
    
    draw_rectangle_triangle(n);
    
    return 0; 
}
