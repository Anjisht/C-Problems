/*To find whether a number is odd or even.*/
/*Author Anjisht Amritanshu*/
/*Date 3 Feburary 2021*/

#include<stdio.h>
int main()
{
    int num,rem;
    printf("Enter a number=");
    scanf("%d",&num);

    rem=num%2;
    
    if(rem==0)
        printf("\nEven Number");
    
    if(rem==1)
        printf("\nOdd Number");
}