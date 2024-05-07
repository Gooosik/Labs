#include <stdio.h>
#include <stdint.h> 

int main() {
    int squares = 64; 
    uint64_t grains = 1; 
    uint64_t total_grains = 0; 

    for (int i = 1; i <= squares; i++) {
        total_grains += grains; 
        grains *= 2; 
    }

    printf("Zerna: %llu\n", total_grains);

    return 0;
}
