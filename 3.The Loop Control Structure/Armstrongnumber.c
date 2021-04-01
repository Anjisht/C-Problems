/*To printout all armstrong number between 1 and 500*/
/*Author: Anjisht Amritanshu*/
/*Date: 30-03-2021*/
#include<stdio.h>
int main()
{
    int num,one,ten,hund,a,res;
    for(num=1;num<=500;num++)
    {
        a=num;
        one=a%10;
        a=a/10;

        ten=a%10;
        a=a/10;

        hund=a;

        res=(one*one*one)+(ten*ten*ten)+(hund*hund*hund);
        if(num==res)
            printf("\n%d is a armstrong number.",num);

    }
    
}