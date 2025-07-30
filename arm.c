//Write a C program to check whether a given 3 digit number is Armstrong number or not.
//An Armstrong number is a number where the sum of its digits each raised to the power of 3 equals the number itself.
//For example, 153 is an Armstrong number because:
//1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
#include <stdio.h>
#include <math.h> // For using pow() function

int main() {
    int num, originalNum, remainder, result = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, 3);
        originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
