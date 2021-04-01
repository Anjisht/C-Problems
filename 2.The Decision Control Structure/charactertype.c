/*To find the type of character entered*/
/*Author Anjisht Amritanshu*/
/*Date 10 February 2021*/
/*
A-Z->65-90
a-z->97-122
0-9->48-57
special symbols->0-47,58-64,91-96,123-127
*/
#include<stdio.h>
int main()
{
    char cha;
    printf("Enter a single character=");
    scanf(" %c",&cha);

    if(cha>=65&&cha<=90)
        printf("Capital letter");
    if(cha>=97&&cha<=122)
        printf("Small case letter");
    if(cha>=48&&cha<=57)
        printf("Digit");
    if((cha>=0&&cha<=47)||(cha>=58&&cha<=64)||(cha>=91&&cha<=96)||(cha>=123&&cha<=127))
        printf("Special Symbol");
        
}