#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
    int scalar = 2;

    // Multiply each element by scalar
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 4; col++) {
            a[row][col] *= scalar;
        }
    }

    // Print the updated array
    printf("The elements are:\n");
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 4; col++) {
            printf("%d ", a[row][col]);
        }
        printf("\n");
    }

    return 0;
}
