/*Sum of digits in a number*/
/*Author Anjisht Amritanshu*/
/*Date: 28 January 2021*/

#include<stdio.h>
int main()
{
    int num,sum;

    printf("Enter a five digit number=");
    scanf("%d",&num);

    sum=num%10;
    num=num/10;
    
    sum=sum +num%10;
    num=num/10;

    sum=sum+num%10;
    num=num/10;

    sum=sum+num%10;
    num=num/10;

    sum=sum+num%10;


    printf("Sum of digits =%d",sum);

}