#include <stdio.h>

int main() {
    int roll_numbers[2] = {101, 102}; // Roll numbers of two students
    int marks[2][2] = {
        {85, 90},  // Marks for roll number 101
        {78, 88}   // Marks for roll number 102
    };

    printf("Roll No\tSubject 1\tSubject 2\n");
    for (int i = 0; i < 2; i++) {
        printf("%d\t%d\t\t%d\n", roll_numbers[i], marks[i][0], marks[i][1]);
    }

    return 0;
}
