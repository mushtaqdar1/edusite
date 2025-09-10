/*Standard I/O in C
Standard I/O (Input/Output) in C refers to the use of predefined functions in the C
Standard Library for performing input and output operations, primarily through the
standard input (stdin), standard output (stdout), and standard error (stderr) streams.
Key Functions for Standard I/O
1. Input Functions
Function | Description
-------------|---------------------------------------
scanf() | Reads formatted input from stdin
getchar() | Reads a single character from stdin
gets() (unsafe, deprecated) | Reads a line from stdin (unsafe, deprecated)
fgets() | Reads a string from stdin safely
Example:*/
#include <stdio.h>
int main() {
 int age;
 printf("Enter your age: ");
 scanf("%d", &age);
 printf("You entered: %d\n", age);
 return 0;
}
/*2. Output Functions
Function | Description
-------------|----------------------------------------
printf() | Prints formatted output to stdout
putchar() | Prints a single character to stdout
puts() | Prints a string followed by a newline
Example:
#include <stdio.h>
int main() {
 char name[] = "Alice";
 printf("Hello, %s!\n", name);
 return 0;
}
Standard Streams
Stream | Description
-----------|------------------------------------
stdin | Standard input (usually keyboard)
stdout | Standard output (usually screen)
stderr | Standard error (used for errors)
You can also use fprintf() and fscanf() to read/write using these streams explicitly:
fprintf(stdout, "This goes to stdout\n");
fprintf(stderr, "This is an error message\n");
Notes:
- gets() is unsafe and removed in C11. Use fgets() instead.
- Always check the return values of scanf() and other input functions for robust code.