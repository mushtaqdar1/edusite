#include<stdio.h>
    struct employee
    {
        int id;
        char name[12];
        float salary;
        char mobile[12];
    };
    int main()
{
     struct employee e1;
     printf ("enter the details of the employees:\n");
    scanf("%d %s %f %s",&e1.id,&e1.name,&e1.salary,&e1.mobile);
    printf("\nEmployee Details:\nID: %d\nName: %s\nSalary: %.f\nMobile: %s\n", e1.id, e1.name, e1.salary, e1.mobile);
return 0;

}
