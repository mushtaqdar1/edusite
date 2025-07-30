#include<stdio.h>
void main()
{

    int arr[5]={10,20,30,40,50};
    int *p=(int*)(&arr+1);// Pointer arithmetic to get the address of the next element after the array
    printf("%d %d\n",*(arr+1),*(p-1)); // Accessing the second element of the array and the last element using pointer arithmetic       
        printf("%d %d",*(arr+1),*(p-1));
}