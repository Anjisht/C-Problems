/*Aggregate generator*/
/*Author Anjisht Amritanshu*/
/*Date: 27 January 2021*/

main()
{
    float mat,sci,s_sci,eng,hin,aggregate,percentile;

    printf("Enter Marks obtained in each subject:");
    printf("\nMaths=");
    scanf("%f",&mat);
    printf("\nScience=");
    scanf("%f",&sci);
    printf("\nSocial Science=");
    scanf("%f",&s_sci);
    printf("\nEnglish=");
    scanf("%f",&eng);
    printf("\nHindi=");
    scanf("%f",&hin);

    aggregate=mat+sci+s_sci+eng+hin;
    percentile=(aggregate/500)*100;

    printf("\nThe aggregate Marks= %f out of 500",aggregate);

    printf("\nThe total percentile=%f %%",percentile);

    

    
}