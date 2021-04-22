//to find out range from given numbers
//Author:Anjisht Amritanshu
//Date:18 /4/2021
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,max,min,range,flag=0,n;
    char ch=0;
    printf("\nHow many numbers are there in set?");
    scanf("%d",&n);
    while(n>0)
    {
    printf("\nEnter number=");
    scanf("%d",&num);

    if(flag==0)
        {
            max=min=num;
            flag=1;
        }
    else
    {
        if(num>max)
            max=num;
        if(num<min)
            min=num;
    }

    n--;
    }
    range=max-min;

    printf("\nRange=%d",range);
}
