#include <stdio.h>
void main()
{

    int arr[5]={10,20,30,40,50}
    int *p=(int*)(&arr+1);
    printf("%d %d",*(arr+1),*(p-1));
}
/*#include <stdlib.h>

int main()
{
    int x[]={2,4,6,8,10};
    int a,b=0,*y=x+4;
    for (a=0;a<5;a++)
    {
    b=b+(*y-a)-*(y-a);
    }
        printf("%d\n",b);
    return 0;}
    /*x[0]=2
    x[1]=4
    x[2]=6
    x[3]=8
    x[4]=10
    pointer y:
    y points to x[4], which is 10:

    first iteration(a=0)
    *y=10
    *(y-a)=*(y-0)=*y=10
    result b=b+(10-10)b+0=0*/

