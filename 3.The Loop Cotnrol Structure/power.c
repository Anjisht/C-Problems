/*To calculate power of a number=*/
/*Author: Anjisht Amritanshu*/
/*Date:30-03-2021*/
#include<stdio.h>
int main()
{
    int num1,num2,pow=1,i;
    printf("Enter value of num1 and num2=");
    scanf("%d %d",&num1,&num2);

    for(i=1;i<=num2;i++)
    {
        pow*=num1;
    }
    printf("%d raised to power of %d =%d",num1,num2,pow);
}