#include <stdio.h>


void draw_rectangle_triangle(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");7
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
