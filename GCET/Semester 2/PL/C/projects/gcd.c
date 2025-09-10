#include<stdlib.h>
int gcd (int A, int B)
{
int temp;
while ((B % A) != 0)
    {
temp = B % A;
B = A;
A = temp;}
return (A);}
int main()
{
    int x, y, z;
    printf("Enter Two numbers: A & B");
scanf("%d%d",&x,&y);
z = int gcd(x,y);
printf("GCD of %d and %d is %d\n", x, y, z);
return 0;
}

