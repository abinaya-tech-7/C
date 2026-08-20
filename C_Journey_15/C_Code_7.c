#include <stdio.h>

int main()
{
    int n, term;

    scanf("%d", &n);

    if (n % 2 == 1)
    {
        // Odd position: 0, 2, 4, 6, 8...
        term = n - 1;
    }
    else
    {
        // Even position: previous term / 2
        term = (n - 2) / 2;
    }

    printf("%d", term);

    return 0;
}
