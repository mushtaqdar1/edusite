#include<stdlib.h>
#include<stdio.h>
int main()
{

    // Program for SI
    int t,p,count=1;
    float rate,si;
    while(count<=3)
    {printf("Enter the values of Principal,rate and Time_period \n");
    scanf(" %d %f %y",&p,&rate,&t);
    si=(p*rate*t)/100;
    printf("The calculated SI=%f\n",si);
    count+=1;
    }
}
