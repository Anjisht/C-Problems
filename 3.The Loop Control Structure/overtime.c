/*Overtime payment*/
/*Author: Anjisht Amritanshu*/
/*Date:30-3-2021*/
#include<stdio.h>
int main()
{
    int emp=1,hour,overt;

    while(emp<=10)
    {
        printf("\nEmployee number %d",emp);
        printf("\nEnter hour worked=");
        scanf("%d",&hour);
        if(hour>40)
        {
            overt=hour-40;
            printf("Rs.%d amount to be paid for overtime.",overt*12);
        }
        else
            printf("No overtime pay.");
        emp++;
    }
}