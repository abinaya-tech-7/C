#include <stdio.h>

int main()
{
    int N = 10;
    int K = 5;
    int candies = 10;
    int order;

    printf("Enter number of candies to buy: ");
    scanf("%d", &order);

    if(order > candies || order <= 0)
    {
        printf("INVALID INPUT");
    }
    else
    {
        candies = candies - order;

        if(candies <= K)
        {
            candies = N;
        }

        printf("NUMBER OF CANDIES SOLD : %d\n", order);
        printf("NUMBER OF CANDIES LEFT : %d\n", candies);
    }

    return 0;
}
