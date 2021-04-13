//To calculate size of paper from A0 to A8
//a0->1189 X 841 
//a1->841 x594
//Author: Anjisht Amritanshu
//Date:12/4/2021

#include<stdio.h>
int main()
{
    int a0l,a0b,
        a1l,a1b,
        a2l,a2b,
        a3l,a3b,
        a4l,a4b,
        a5l,a5b,
        a6l,a6b,
        a7l,a7b,
        a8l,a8b;


    a0l=1189;
    a0b=841;
    printf("\nSize of A0-> %d x %d mm",a0l,a0b);


    a1l=a0b;
    a1b=a0l/2;
    printf("\nSize of A1-> %d x %d mm",a1l,a1b);


    a2l=a1b;
    a2b=a1l/2;
    printf("\nSize of A2-> %d x %d mm",a2l,a2b);


    a3l=a2b;
    a3b=a2l/2;
    printf("\nSize of A3-> %d x %d mm",a3l,a3b);


    a4l=a3b;
    a4b=a3l/2;
    printf("\nSize of A4-> %d x %d mm",a4l,a4b);


    a5l=a4b;
    a5b=a4l/2;
    printf("\nSize of A5-> %d x %d mm",a5l,a5b);


    a6l=a5b;
    a6b=a5l/2;
    printf("\nSize of A6-> %d x %d mm",a6l,a6b);



    a7l=a6b;
    a7b=a6l/2;
    printf("\nSize of A7-> %d x %d mm",a7l,a7b);


    a8l=a7b;
    a8b=a7l/2;
    printf("\nSize of A8-> %d x %d mm",a8l,a8b);

    return 0;

}