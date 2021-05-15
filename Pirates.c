#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int pirates, coins, coinsDis, piratesNoCap, coinExtra;

    printf("Enter the amount of pirates\n");
    scanf(" %d", &pirates);

    printf("Enter the amount of coins\n");
    scanf(" %d", &coins);

    piratesNoCap = pirates - 1;
    coinsDis = coins - piratesNoCap;

    if(piratesNoCap % 2 == 0) //if its divisible meaning if its even
    {
        coinExtra = piratesNoCap / 2;
        coinsDis = coinsDis + coinExtra;

        printf("The Captain will have %d coins\n", coinsDis);
    }
    else //if its odd
    {
        piratesNoCap = piratesNoCap - 1;
        coinExtra = piratesNoCap / 2;
        coinsDis = coinsDis + coinExtra + 1;

        printf("The captain will have %d coins\n", coinsDis);

    }

    return EXIT_SUCCESS;
}