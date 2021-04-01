/*To check whethera year is leap year or not */
/*Only using logical operators*/
/*Author Anjisht Amritanshu*/
/*Date 9 February 2021*/
#include<stdio.h>
int main()
{
    int yr;

    printf("Enter year=");
    scanf("%d",&yr);

    if((yr%100==0&&yr%400==0)||(yr%4==0&&yr%100!=0))
        printf("Leap year");
    else
        printf("Not leap year");

}