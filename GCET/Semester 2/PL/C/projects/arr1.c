#include<stdlib.h>
int main()
{
    /*int arr[5]={1,4,5,6,7,-9,'5'};*/
    int x=10,y=20;
   /* for (int i=0;i<=7;i++)
    printf("The element at %d in an array is=%d\n",i,arr[i]);*/
    printf("The values of x   and y before swap=%d %d\n",x,y);
swap(&x,&y);
printf("The values of x   and y after swapping=%d %d",x,y);
}
void swap(int *ptr1,int *ptr2)
{
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
