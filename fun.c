#include <stdio.h>

int add(int a, int b); // Function prototype

int main()
{
    int t , p; // Declare and initialize t and p
    int m = add(t, p); // Call the add function
    printf("Hello, World!\n");
    printf("This is a simple C program.\n");
    printf("It prints a message to the console.\n"); 
    printf("Enter the values of p & t: %d\n", m);   
    scanf("%d %d", &t, &p); // Read values for t and p
    m = add(t, p); // Call the add function again with new values
     printf("The sum is: %d\n", m); // Print the result
    printf("Goodbye!\n");
    return 0; // Return statement for main
}

int add(int a, int b)
{
    return a + b; // Return the sum of a and b
}