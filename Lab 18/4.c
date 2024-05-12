#include<stdio.h>

int dasye(char *name,int vaga, int vusota, int vik) {
    printf("Name: %s\n", name);
    printf("-----------------------\n");
    printf("Weight: %d\nHight: %d\nAge: %d\n", vaga, vusota, vik);
    
    return 0;
}

int main() {
    char input_name[100];
    int input_vaga;
    int input_vusota;
    int input_vik;
    
    printf("Name: ");
    scanf("%s", input_name);
    printf("Weight: ");
    scanf("%d", &input_vaga);
    printf("Hight: ");
    scanf("%d", &input_vusota);
    printf("Age: ");
    scanf("%d", &input_vik);
    
    
    dasye(input_name, input_vaga, input_vusota, input_vik);
    
    return 0;
}
