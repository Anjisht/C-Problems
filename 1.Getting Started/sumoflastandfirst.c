/*Sum of first and last digit of a number*/
/*Author Anjisht Amritanshu*/
/*Date: 29 January 2021*/

#include<stdio.h>
int main()
{
    int num,fir_dig,las_dig,sum;
    printf("Enter a 4 digit number=");
    scanf("%d",&num);

    las_dig=num%10;
    fir_dig=num/1000;
    sum=las_dig+fir_dig;
    printf("The Sum of first and last digit =%d",sum);
}