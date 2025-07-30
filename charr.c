#include<stdio.h>
int main()
{
    char c[]="Year2023";
    char *p=c;
    printf("%*s",p[3]-p[1],p+1); 
    return 0;   
}