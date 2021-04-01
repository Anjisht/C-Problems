/*Calculation of Gross Salary*/
/*Author Anjisht Amritanshu */
/*Date:27 January 2021*/

main()
{
    float basic_sal,gross_sal,dear_allow,house_allow;
    printf("Enter Your Salary=");
    scanf("%f",&basic_sal);
    printf("Your Salary is=Rs.%f",basic_sal);
    printf("\nDearness Allowance is 40%% of your salary.");
    printf("\nHouse Rent Allowance is 20%% of your salary.");
    dear_allow=(basic_sal*40)/100;
    house_allow=(basic_sal*20)/100;

    printf("\nYour Dearness allowance=Rs.%f",dear_allow);
    printf("\nYour House rent allowance=Rs.%f",house_allow);

    gross_sal=basic_sal+dear_allow+house_allow;

    printf("\nYour Gross Salary=%f",gross_sal);

}