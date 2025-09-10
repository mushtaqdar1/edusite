#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 10, y = 20;
    int (*ptr)(int, int) = add;  // function pointer to 'add'

    int z = ptr(x, y);

    printf("Sum of x and y = %d\n", z);
    printf("Address of function pointer = %p\n", (void*)ptr);

    return 0;
}
