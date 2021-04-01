/*Factorial of number*/
/*Author: Anjisht Amritanshu*/
/*Date:30-03-2021*/

#include<stdio.h>
int main()
{
    int num,a,res=1;
    printf("Enter a number=");
    scanf("%d",&num);

    for(a=1;a<=num;a++)
    {
        res*=a;
    }
    printf("\nFactorial of number %d is %d.",num,res);

}  