#include<stdio.h>
#include<math.h>

int main()
{

    float a,b,c,p,area;
    printf("Enter length of each side=");
    scanf("%f%f%f",&a,&b,&c);

    p=(a+b+c)/2;

    area=sqrt(p*(p-a)*(p-b)*(p-c));

    printf("Area of triangle=%f",area);
    return 0;
}