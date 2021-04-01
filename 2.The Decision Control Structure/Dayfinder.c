/*To find day of 1st january of a year*/
/*Author Anjisht Amritanshu*/
/*Date: 3 Feburary 2021*/
#include<stdio.h>
int main()
{
        int yr,diff,leap,normal,totday,day;

        printf("Enter year=");
        scanf("%d",&yr);

        diff=yr-1900-1; 
        leap=diff/4;
        normal=diff-leap;

        totday=(365*normal)+(366*leap)+1;

        day=totday%7;

        if(day==0)
                printf("monday");
        if(day==1)
                printf("tuesday");
        if(day==2)
                printf("wednesday");
        if(day==3)
                printf("thursday");
        if(day==4)
                printf("friday");
        if(day==5)
                printf("saturday");
        if(day==6)
                printf("sunday");
}