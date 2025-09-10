
#include <stdio.h>
//array to function */
// function to print a string     
//string */
//string */   
int main( ) 
{
    char footballer[40];
    puts("Enter name");
    fgets(footballer, sizeof(footballer), stdin);  /* safer than gets */
    puts("Happy footballing!");
    puts(footballer);
    return 0;
}