//to printout absolute value of a number
//Author:Anjisht Amritanshu
//Date:13/04/2021
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number=");
    scanf("%d",&num);

    if(num<0)
    num=num*-1;

    printf("Absolute value of number=%d",num);
}