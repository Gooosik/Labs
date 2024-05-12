#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_characters(char *string, int num_chars_to_print) {
    int printed_chars = 0;
    for (int i = 0; i < strlen(string); i++) {
        if (printed_chars < num_chars_to_print) {
            printf("%c", string[i]);
            printed_chars++;
        } else {
            break;
        }
    }
    printf("\n");
}

int main() {
    char input_string[] = "Горобець вийшов спитати";
    int num_chars_to_print = 4;
    print_characters(input_string, num_chars_to_print);
    return 0;
}
