/*To calculate 
1.whether the person should be insured or not
2.premium rate
3.maximum amount for which he/she can be insured.*/
#include<stdio.h>
main()
{
    int age,health,residence,gender;
    printf("Enter age(1 for age between 25 and 35 else 0)=");
    scanf("%d",&age);

    printf("\nEnter gender(1 for male and 0 for female)=");
    scanf("%d",&gender);

    printf("\nEnter health(1 for good and 0 for bad)=");
    scanf("%d",&health);

    printf("\nEnter residence(1 for city and 0 for village)=");
    scanf("%d",&residence);
    
    if(health==1&&age==1&&residence==1&&gender==1)
        printf("Premium is rs.4 per thousand and his policy amount cannot exceeds rs.2 lakh.");

    if(health==1&&age==1&&residence==1&&gender==0)
        printf("Premium is rs.3 per thousand and her policy amount cannot exceeds rs.1 lakh.");
    if(health==0&&age==1&&residence==0&&gender==1)
        printf("Premium is rs.6 per thousand and his policy amount cannot exceeds rs.10,000.");
}