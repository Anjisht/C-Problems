#include<stdio.h>
int main()
{
    int yr;
    scanf("%d",&yr);
    (yr%4==0)?  (
                    (yr%100==0)?(
                                    yr%400==0?
                                                (printf("Leap year")):(printf("Not a leap year"))
                                )
            :(printf("Leap year"))
                )
        :(printf("Not a leap year"));

}
