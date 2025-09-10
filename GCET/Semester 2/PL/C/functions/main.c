#include <stdio.h>
// Function declaration
int add(int a, int b);
int mult(int a, int b);

int main()
 {
int num1 = 5, num2 = 10;
int sum = add(num1, num2); // Function call
int pro= mult(num1, num2);
printf("Sum: %d\n", sum);
printf("Sum: %d\n", pro);
return 0;
}
// Function definition
int add(int a, int b) {
return a - b;
}
int mult(int a, int b)
 {
return a*b;
}
