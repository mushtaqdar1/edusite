#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("***** Voting for JK****!\n");
    int age;
    printf("Enter any age:");
    scanf("%d",&age);
    if(age>18)
    {
        printf("You are eligible for vote");
    }
    else{
        printf("You are Not-eligible for vote");
    }
    return 0;`
}
