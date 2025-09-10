#include<stdlib.h>
int factorial(int m)
{
   int i,temp=1;
    for (i=1;i<m;i++)
    temp=temp*i;
   return(temp);
}
main()
{

    int n;
    for(n=0;n<=10;n++)
        printf("\n The %d! =%d",n,factorial(n));

}
