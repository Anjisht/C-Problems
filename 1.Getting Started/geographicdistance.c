//to calculate nautical miles between to places in world.
//Author:Anjisht Amritanshu
//Date:12/04/201
#include<stdio.h>
#include<math.h>

int main()
{
    float L1,L2,G1,G2,D;
    printf("Enter the longitude and latitude of 1st place=");
    scanf("%f %f",&G1,&L1);
    printf("\nEnter the longitude and latitude of 2nd place=");
    scanf("%f %f",&G2,&L2);
    L1=L1*3.14/180;
    G1=G1*3.14/180;
    L2=L2*3.14/180;
    G2=G2*3.14/180;

    D=3963*acos(sin(L1)*sin(L2)+cos(L1)*cos(L2)*cos(G2-G1));
    printf("The nautical miles betwen two places is=%f",D);
    return 0;
}