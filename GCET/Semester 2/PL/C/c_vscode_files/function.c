#include<stdio.h>
#include<stdio.h>

// Function prototype
int sum(int x, int y);

int main() {
    int i, a,b;
    for(i = 0; i < 10; i++) {
        b = sum(i, a);
        printf("%d\n", b);
    }
    return 0;
}

// Function definition
int sum(int x, int y) {
    return x + y;
}