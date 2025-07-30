//Write a C program to print the numbers in triangular form
 //1
 //1 2
 //1 2 3
 //1 2 3 4
#include <stdio.h>
int main() {
    int i, j;
    int rows = 4; // You can change this to print more or fewer rows

    for (i = 1; i <= rows;i++) {
        for (j = 1; j <= i;j++) {
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}
