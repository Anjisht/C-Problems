//to check whether three given coordinates lie on same line
//Author:Anjisht Amritanshu
//Date:13/4/2021

#include<stdio.h>
#include<math.h>

int main()
{
    float x1,x2,x3,y1,y2,y3,l13,l12,l23;

    printf("Enter x1 and y1=");
    scanf("%f %f",&x1,&y1);
    printf("Enter x2 and y2=");
    scanf("%f %f",&x2,&y2);
    printf("Enter x3 and y3=");
    scanf("%f %f",&x3,&y3);

    l13=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
    l12=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    l23=sqrt(pow(x3-x2,2)+pow(y3-y2,2));

    if(l13=l12+l23)
        printf("All the three points lie on same line.");
    else
        printf("All three points don't lie on same line.");
    
}