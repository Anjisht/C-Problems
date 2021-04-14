//to convert RGB to CMYK
//Author:Anjisht Amritanshu
//Date:14/4/2021
#include<stdio.h>

int main()
{
    float r,g,b,max;
    float c,m,y,k,white;

    printf("Enter Value of (RGB) from (1 to 255)=");
    scanf("%f %f %f",&r,&g,&b);

    if(r>g &&r>b)
        max=r;
    if(g>r&&g>b)
        max=g;
    else
        max=b;

    if(r==0&&g==0&&b==0)
    {
        c=m=y=0;
        k=1;
    }
    else
    {
        white=max/255;
        c=(white-r/255)/white;
        m=(white-g/255)/white;
        y=(white-b/255)/white;
        k=1-white;
    }
    printf("White=%.3f",white);
    printf("\nValue of \ncyan=%.3f\nmagenta=%.3f\nyellow=%.3f\nblack=%.3f\n",c,m,y,k);
    return 0;
}