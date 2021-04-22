//to calculate the number of positive,negative numbers and zero.
//Author:Anjisht Amritanshu
//Date:14/4/2021   
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    char a;
    int pos=0,neg=0,zero=0;


    while(1)
    {
        printf("\nEnter number=");
        scanf("%d",&num);

        if(num>0)
            pos++;
        else if(num==0)
            zero++;
        else   
            neg++;      

        fflush(stdin);//cleans the input buffer
        printf("\nDo u want to continue(y or n)?");
        scanf("%c",&a);    

        if(a=='n'||a=='N')    
            break;
        
    }   
    printf("\nThe number of Positive number=%d",pos);
    printf("\nThe number of Negative number=%d",neg);
    printf("\nThe number of Zero=%d",zero);

    return 0;
    
}