#include <stdio.h>

struct employee {
    int id;
    char name[89];
    char designation[56];
    float salary;
};

int main() {
    struct employee e1 = {1001, "Mushtaq", "engineer", 78000};
    struct employee *ptr = &e1;

    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
    printf("Designation: %s\n", ptr->designation);
    printf("Salary: %.2f\n", ptr->salary);

    return 0;
}
