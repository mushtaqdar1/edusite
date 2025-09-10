#include <stdio.h>

int main() {
    int choice = 2;
    switch (choice) {
        case 1:
            printf("Option 1 selected\n");
            break;
        case 2:
            printf("Option 2 selected\n");
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}
