/*Profit and loss by a seller*/
/*Author Anjisht Amritanshu*/
/*Date: 2 Feburary 2021*/
#include<stdio.h>
int main()
{
    float cp,sp,diff,l;

    printf("Enter cost price of item=");
    scanf("%f",&cp);

    printf("Enter sell price of item=");
    scanf("%f",&sp);
    diff=sp-cp;
    l=-diff;
    if(diff>0)
        //profit
        printf("\nA total of Rs.%f profit has been made.",diff);
    else
    {
        if(diff==0)
            printf("\nNo profit and loss has been made."); //no profit and no loss.
        else
            printf("\nA total of Rs.%f loss has incurred.",l); //loss 
    }
}