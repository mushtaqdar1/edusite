#include <stdio.h>
int main() 
{
  // Example of standard input/output in C
  // This program prompts the user for their age and prints it back 
 int age;
 printf("Enter your age: ");
 if (scanf("%d", &age) != 1) {
     printf("Invalid input.\n");
     return 1;
 }
 printf("You entered: %d\n", age);
 return 0;
}