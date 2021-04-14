//to enter the ages  through keyboard of three kids and then determine who is youngest.
//Author:Anjisht Amritanshu
//Date:13/4/2021

#include<stdio.h>
int main()
{
    int a,s,r;
    printf("Enter age of Ajay, Ram, Shyma=");
    scanf("%d %d %d",&a,&r,&s);

    if(a<r && a<s)
    printf("Ajay is the youngest.");

    if(r<a && r<s)
    printf("Ram is the youngest.");

    if(s<a && s<r)
    printf("Shyam is the youngest.");
    return 0;   
}