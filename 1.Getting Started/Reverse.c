/*To reverse a five digit number*/
/*Author Anjisht Amritanshu*/
/*Date: 29 January 2021*/
#include<stdio.h>

int main()
{
    int num,r_num;

    printf("Enter a five digit number=");
    scanf("%d",&num);

    r_num=(num%10)*10000;
    num=num/10;
    

    r_num=r_num+(num%10)*1000;
    num=num/10;
   

    r_num=r_num+(num%10)*100;
    num=num/10;

    r_num=r_num+(num%10)*10;
    num=num/10;

    r_num=r_num+(num%10);

    printf("Reversed number=%d",r_num);


}