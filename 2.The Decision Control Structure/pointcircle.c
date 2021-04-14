//to find whether a point is inside the circle or on or outside the circle.
//Author:Anjisht Amritanshu
//Date:13/04/2021

#include<stdio.h>
#include<math.h>

int main()
{
    int x1,y1,x,y,r;
    float pos;

    printf("Enter x and y coordinates of circle=");
    scanf("%d %d",&x,&y);
    
    printf("Enter radius of circle=");
    scanf("%d",&r);

    printf("Enter x and y coordinates of point=");
    scanf("%d %d",&x1,&y1);

    pos=sqrt(pow(x1-x,2)+pow(y1-y,2));

    if(pos>r)
        printf("The point is out of the circle");
    if(pos==r)
        printf("The point is on circle.");
    if(pos<r)
        printf("The point is inside the circle.");


}