#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=1;
    switch(x)
    {
        case 1: printf("x is 1\n");
        break;
        case 2: printf("x=2!\n");
        break;case 3: printf("x =3!\n");
        break;
        default: printf("x is a number other than 1!\n");
        break;
    }

}
