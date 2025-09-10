#include <stdio.h>
#include <conio.h>
int main() {
 int age;
 printf("Enter your age: ");
 scanf("%d", &age);
 printf("You entered: %d\n", age);
    if (age < 0) {
        printf("Age cannot be negative.\n");
        return 1;
    }getchar(); // Clear the newline character from the input buffer
    printf("Press Enter to exit...");
 return 0;
}