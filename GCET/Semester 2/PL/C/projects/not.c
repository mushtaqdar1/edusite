#include <stdio.h>
#include <stdlib.h>

double operate(double x, double y, char op);  // Function prototype

int main() {
    double x = 10.0, y = 5.0, z;
    char op = '+';  // You can change this to '~' or 'x'

    z = operate(x, y, op);
    printf("Result: %.1f\n", z);

    return 0;
}

double operate(double x, double y, char op) {
    switch (op) {
        case '+': return x + y + 0.5;
        case '~': return (x > y ? x - y : y - x) + 0.5;
        case 'x': return x * y + 0.5;
        default: return -1;
    }
}
