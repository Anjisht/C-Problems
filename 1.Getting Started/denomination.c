//To output number of smallest number of notes that would make up sum of N
//Author: Anjisht Amritanshu
//Date: 12/4/2021
#include<stdio.h>
int main()
{
    int N,sum,notes;

    printf("Enter the amount of money=");
    scanf("%d",&N);
    sum=N;
    notes=N/100;
    N=N%100;

    notes=notes+N/50;
    N=N%50;

    notes=notes+N/10;
    N=N%10;

    notes=notes+N/5;
    N=N%5;

    notes=notes+N/2;
    N=N%2;

    notes=notes+N;

    printf("Smallest number of notes to make up the sum of Rs.%d is %d notes",sum,notes);

    return 0;
}