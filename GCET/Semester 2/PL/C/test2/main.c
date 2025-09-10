#include <stdio.h>
int a,b,v=1;
int main()
{    int a,b,sum,s;
    printf("Enter the numbers:\n");
    scanf("%d %d",&a,&b);
    sum=add(a,b);
     s=s1(a,b);
     int ss=m1(a,b,v);
    printf("sum:%d\n",sum);printf("sub=%d\n",s);
    printf("mul=%d\n",ss);
    }
    int add(a,b)
    {
            int z=a*b;
            return z;
}
int s1(a,b)
{
    return a-b;
}
m1(a,b,v)
{
    return a*b*v;
}
