/*A menu driven program*/
/*Author:Anjisht Amritanshu*/
/*Date: 4/4/2021 */
#include<stdio.h>
int main()
{
    int choice,i,num=1,count=1,fac=1;
    while(1)
    {
        printf("\n1.Factorial");
        printf("\n2.Prime");
        printf("\n3.Odd/Even");
        printf("\n4.Exit");

        printf("\nYour choice?");
        scanf("%d",&choice);
        
        switch(choice)
        {
        case 1:
            printf("\nEnter a number(from 1 to 12)=");
            scanf("%d",&i);
            for(count=1;count<=i;count++)
                fac*=count;
            printf("\nFactorial=%d\n",fac);
            fac=1;
            break;
        
        case 2:
            printf("\nEnter a no.=");
            scanf("%d",&num);
            if(num==2)
            {
                printf("Prime number");
                break;
            }
            for(i=2;i<=(num-1);i++)
            {
                if(num%i==0)
                {    printf("Not a prime number");
                     break;
                }
                if(i==(num-1))
                    printf("Prime number");
            }
            break;

        case 3:
            printf("\nEnter a no.=");
            scanf("%d",&num);
            if(num%2==0)
                printf("Even number");
            else   
                printf("Odd number");
            break;
        
        case 4:
            exit(0);
        }
    }
}