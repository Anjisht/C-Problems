/*To printout all prime number between 1 and 300*/
/*Author: Anjisht Amritanshu*/
/*Date:01-04-2021*/

#include<stdio.h>
int main()
{
    int i,num,a;
    for(i=2;i<=300;i++)
    {
        num=i;
        printf("\n%d",num);
        for(a=(num-1);a>=2;a--)
        {
            if(a==1)
                printf("\n%d is a prime number.",num);
            if(num%a==0)
            {
                break;
            }
            if(a==2)
                printf("\n%d is a prime number.",num);

        }
    }
}
