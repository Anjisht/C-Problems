//to printout octal value of given number
//Author:Anjisht Amritanshu
//Date:18/4/2021
#include<stdio.h>
int main()
{
    int num,oct=0,org_num,n=0,rem=0,i;

    printf("\nEnter a number(decimal)=");
    scanf("%d",&num);
    org_num=num;
    i=1;
    while(num>0)
    {
        rem=num%8;
        num=num/8;
        oct+=rem*i;
        i=i*10;
        
    }

    printf("\nOctal value of %d is %d",org_num,oct);
    return 0;
}