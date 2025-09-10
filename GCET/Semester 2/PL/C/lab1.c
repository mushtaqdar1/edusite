#include <stdio.h>

// a. Check whether a number is even or odd using a ternary operator
void checkEvenOdd() {
    int num;
    printf("\n[a] Check Even or Odd\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    (num % 2 == 0) ? printf("Even\n") : printf("Odd\n");
}

// b. Perform addition of two numbers without using the + operator
void addWithoutPlus() {
    int a, b;
    printf("\n[b] Addition without using + operator\n");
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    while (b != 0) {
        int carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    printf("Sum = %d\n", a);
}

// c. Evaluate the arithmetic expression ((a + b / c * d - e) * (f - g))
void evaluateExpression() {
    float a, b, c, d, e, f, g, result;
    printf("\n[c] Evaluate Arithmetic Expression\n");
    printf("Enter values for a, b, c, d, e, f, g: ");
    scanf("%f %f %f %f %f %f %f", &a, &b, &c, &d, &e, &f, &g);
    result = ((a + (b / c) * d - e) * (f - g));
    printf("Result = %.2f\n", result);
}

// d. Find the sum of individual digits of a 3-digit number
void sumOfDigits() {
    int num, sum = 0;
    printf("\n[d] Sum of Individual Digits\n");
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);
    sum += num % 10; // Get the last digit
    num /= 10;       // Remove the last digit
    sum += num % 10; // Get the middle digit
    num /= 10;       // Remove the middle digit
    sum += num;      // Add the first digit
    printf("Sum of digits = %d\n", sum);
}

// e. Evaluate expressions (x + y) / (x - y) and (x + y)(x - y)
void evaluateExpressions() {
    float x, y;
    printf("\n[e] Evaluate Expressions\n");
    printf("Enter values for x and y: ");
    scanf("%f %f", &x, &y);

    if (x - y != 0) { // Check to avoid division by zero
        float result1 = (x + y) / (x - y);
        float result2 = (x + y) * (x - y);
        printf("Results: (x + y) / (x - y) = %.2f, (x +