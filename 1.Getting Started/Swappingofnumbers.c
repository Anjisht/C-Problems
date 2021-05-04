#include<stdio.h>
int main()
{
    float c,d;

    printf("Enter value of c=");

    scanf("%f",&c);

    printf("Enter value of d=");

    scanf("%f",&d);

    c=c+d;
    d=c-d;
    c=c-d;

    printf("Value of c=%f",c);
    printf("Value of d=%f",d);

}