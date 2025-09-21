// Function to find GCD of two numbers
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
// Function to find GCD of three numbers
int gcd_three(int a, int b, int c) {
    return gcd(gcd(a, b), c);
}

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int result = gcd_three(num1, num2, num3);
    printf("GCD of %d, %d, and %d is: %d\n", num1, num2, num3, result);

    return 0;
}
