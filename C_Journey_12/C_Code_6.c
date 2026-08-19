#include <stdio.h>

int fact(int n)
{
    int i, f = 1;

    for(i = 1; i <= n; i++)
    {
        f = f * i;
    }

    return f;
}

int main()
{
    int i;
    float sum = 0;

    for(i = 1; i <= 5; i++)
    {
        sum = sum + (float)fact(i) / i;
    }

    printf("Sum of the series = %.2f", sum);

    return 0;
}
