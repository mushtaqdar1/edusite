

#include <stdio.h>
#include <stdlib.h>

int main() {
    char grade;
    printf("Enter Grade: ");
    scanf(" %c", &grade);  // Note the space before %c

    switch (grade) {
        case 'a':
        case 'A':
            printf("Grade A\n");
            break;
        case 'b':
        case 'B':
            printf("Grade B\n");
            break;
        case 'c':
        case 'C':
            printf("Grade C\n");
            break;
        case 'd':
        case 'D':
            printf("Grade Pass\n");
            break;
        default:
            printf("Try Again\n");
    }

    return 0;
}
