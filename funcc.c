#include<stdio.h>
int add(a,b);
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Sum is %d",add(a,b));
    return 0;   
}
int add(int a,int b)
{
    return a+b;
}