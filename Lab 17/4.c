#include<stdio.h> 

int secondconflict(int arr[], int size) {
    if (size < 2) {
        printf("Malo elementiv\n");
        return 0;
    }
    
 int sum = arr[1] + arr[size - 2];
 return sum;
 
}
int main() {
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};


int result = secondconflict(arr, 8);

printf("Suma: %d\n", result);

    return 0;
}
