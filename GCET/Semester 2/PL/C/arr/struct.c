#include <stdio.h>
#include <string.h>
struct employee
{
    int id;
    char name[50];
    float salary;
};
int main() {
    struct employee emp1;

    emp1.id = 101;
    strcpy(emp1.name, "Mushtaq Ahmed");
    printf("Employee Name: %s\n", emp1.name);
    emp1.salary = 150000.00;
    printf("Employee Salary: %f\n", emp1.salary);
   

    return 0;
}