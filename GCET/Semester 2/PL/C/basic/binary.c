#include <stdio.h>

void printBinary(int num) {
    for (int i = sizeof(num) * 8 - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);  // Extract each bit
    }
    printf("\n");
}
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Binary equivalent: ");
    printBinary(num);

    return 0;
}
