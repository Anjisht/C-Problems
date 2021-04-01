/*Temperature convertor*/
/*Author Anjisht Amritanshu*/
/*Date: 28 January 2021*/
#include<stdio.h>
main()
{
    float f,c;
    printf("Enter temperature in farenheit=");
    scanf("%f",&f);

    c=((f-32)*5)/9;

    printf("Temperature in celsius=%f",c);
}