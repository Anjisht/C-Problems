//to check which type of triangle
//Author:Anjisht Amritanshu
//Date:13/4/2021

#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,longest,res;

    printf("Enter each side measure=");
    scanf("%f %f %f",&a,&b,&c);

    if(a==b&&b==c&&a==c)
    printf("Equilateral triangle");

    if(a>b&&a>c)
    {   
    longest=a;
    res=pow(b,2)+pow(c,2);
    }
    if(b>a&&b>c)
    {
    longest=b;
    res=pow(a,2)+pow(c,2);
    }

    if(c>a&&c>b)
    {
    longest=c;
    res=pow(a,2)+pow(b,2);
    }
    if(longest==sqrt(res))
    {
        printf("Right Angled Triangle");
        exit(0);
    }
    if(a!=b&&b!=c&&a!=c)
        printf("Scalene Triangle");
    if(a==b||b==c||a==c)
        printf("Isoceles Triangle");
}