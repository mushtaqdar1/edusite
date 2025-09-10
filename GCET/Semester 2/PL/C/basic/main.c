/*#include <stdio.h>

main(int argc, char *argv[])
 {
    printf("Number of arguments: %d\n", argc);
    for (int i = 10; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }
    //return 0;
}*/


#include <stdio.h>

int main() {
    char str[] = "Hello";  // String array
    int array[10];         // Integer array

    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of short int: %zu bytes\n", sizeof(short int));
    printf("Size of long int: %zu bytes\n", sizeof(long int));
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of str array: %zu bytes\n", sizeof(str));
    printf("Size of array: %zu bytes\n", sizeof(array));

    return 0;
}
