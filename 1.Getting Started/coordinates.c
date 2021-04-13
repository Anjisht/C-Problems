//to convert cartesian coordinates to polar coordinates
//Author:Anjisht Amritanshu
//Date:12/4/2021

#include<stdio.h>
#include<math.h>

int main()
{
    int x,y;
    float r,angle;
    printf("Enter x and y coordinates=");
    scanf("%d %d",&x,&y);

    r=sqrt(pow(x,2)+pow(y,2));
    angle=atan2(y,x);
    angle=angle*180/3.14;
    printf("The polar coordinates are=(%f, %f)",r,angle);



}