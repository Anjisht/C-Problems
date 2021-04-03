/*To add seven terms of series:1/1!+2/2!+.... */
/*Author:Anjisht Amritanshu*/
/*Date:4/2/2021*/
#include<stdio.h>
int main()
{
    int i,a;
    float fac=1,sum=0,div;

    for(i=1;i<=7;i++)
    {
        
        for(a=1;a<=i;a++)
        fac*=a;

        div=i/fac;
        sum+=div;
    }

    printf("Sum of series=%f",sum);
}