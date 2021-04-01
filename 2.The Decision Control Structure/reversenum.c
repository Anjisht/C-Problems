/*Reversing 5 digit number and checking whether the original
and reversed number are equal or not*/
/*Author Anjisht Amritanshu*/
/*Date 9 February 2021*/
#include<stdio.h>
int main()
{
    int num,rev_num,org_num;

    printf("Enter a five digit number=");
    scanf("%d",&num);

    org_num=num;
    rev_num=(num%10)*10000;
    num=num/10;
    rev_num=rev_num+(num%10)*1000;
    num=num/10;
    rev_num=rev_num+(num%10)*100;
    num=num/10;
    rev_num=rev_num+(num%10)*10;
    num=num/10;
    rev_num=rev_num+num;

    printf("Entered original number=%d",org_num);
    printf("\neversed number=%d",rev_num);

    if(rev_num==org_num)
        printf("\nBoth the orginal and reversed number are equal.");
    else
        printf("\nOriginal and revrsed number are not equal.");

}