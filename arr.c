#include <stdio.h>

int main() {
    int marks[2][2] = {
                        {85, 90},
                        {78, 88}
                        };

    printf("Student Marks Matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
