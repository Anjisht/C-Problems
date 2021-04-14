//to check whether the given coordinates are on x axis or yaxis or on origin
//Author:Anjisht Amritanshu
//Date:13/4/2021

#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;

    printf("Enter x and y coordinates=");
    scanf("%d %d",&x,&y);

    if(x==0&&y!=0)
        printf("The point lies on y axis.");
    if(x!=0&&y==0)
        printf("The point lies on x axis.");
    if(x==0&&y==0)
        printf("The point is on origin.");
    if(x!=0&&y!=0)
        printf("The point lies on x-y plane.");
} 