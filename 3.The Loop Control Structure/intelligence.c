/*to print table using formula i=2+(y+0.5x)*/
/*Author: Anjisht Amritanshu*/
/*Date:3/4/2021*/
#include<stdio.h>
int main()
{
    int y;
    float i,x;
    for(y=1;y<=6;y++)
    {

        for(x=5.5;x<=12.5;x+=0.5)
        {
            i=2+(y+0.5*x);
            printf("\ni=%.2f\t y=%d\t x=%.2f\t",i,y,x);
        }
    }
}