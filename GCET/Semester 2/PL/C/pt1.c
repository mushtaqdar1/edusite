#include<stdio.h>
void main()
{
    int arr[]={1,2,3,4,5};
    int *p = arr; // Pointer to the first element of the array
    printf("%d %d\n", *(p + 1), *p++);   // Accessing the second and first elements of the array using pointer arithmetic
}