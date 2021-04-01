main()
{
    float c,d,t;

    printf("Enter value of c=");

    scanf("%f",&c);

    printf("Enter value of d=");

    scanf("%f",&d);

    t=c;
   
    c=d;
   
    d=t;

    printf("Value of c=%f",c);
    printf("Value of d=%f",d);

}