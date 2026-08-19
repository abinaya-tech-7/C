#include <stdio.h>

int main()
{
    int n, i, j;
    int fact = 1, temp, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++)
    {
        temp = fact;
        result = 0;

        for(j = 1; j <= i; j++)
        {
            result = result + temp;
        }

        fact = result;
    }

    printf("%d", fact);

    return 0;
}
