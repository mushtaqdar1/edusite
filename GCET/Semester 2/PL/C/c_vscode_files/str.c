#include<stdio.h>
main()
{
int  i = 10 ;
char  ch = ['A'] ;
float  a = 3.14 ;
char  str[20] ;
printf ( "\n%d \n%c %f \n %s", i, ch, a,str) ;
sprintf ( str, "%d %c %f", i, ch, a ) ; printf ( "\n%s", str ) ; }
