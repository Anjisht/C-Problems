/*To determine whether a year is leap year or not*/
/*Author Anjisht Amritanshu*/
/*Date: 3 Feburary 2021*/
#include<stdio.h>
int main()
{
    int year;

    printf("Enter year=");
    scanf("%d",&year);

    if(year%4==0)
    {
        if(year%100==0)
            {
                if(year%400==0)
                    printf("Leap year");
                else
                    printf("Not a leap year");
            }
        else
            printf("Leap year");
            
    }
    else
        printf("Not a leap year");
    
}