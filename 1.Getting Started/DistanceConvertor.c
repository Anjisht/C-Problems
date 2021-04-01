/*Conversion of distance between to cities*/
/*Author Anjisht Amritanshu */
/*Date:27 January 2021*/

main()
{
    float distance_km,distance_m,distance_cm,distance_inch,distance_feet;
    printf("Enter the distance between the two cities(in KM)=");
    scanf("%f",&distance_km);

    distance_m=1000*distance_km;
    distance_cm=100*distance_m;
    distance_inch=distance_cm/2.54;
    distance_feet=distance_inch/12;

    printf("\nThe distance between two cities are:");
    printf("\nMeters=%f m",distance_m);
    printf("\nCentimeters=%f cm",distance_cm);
    printf("\nInches=%f inches",distance_inch);
    printf("\nFeet=%f feet",distance_feet);

}