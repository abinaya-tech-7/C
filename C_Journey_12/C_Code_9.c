#include <stdio.h>

int perfect(int n)
{
    int i, sum = 0;

    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
            sum = sum + i;
    }

    return sum;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(perfect(n) == n)
        printf("Perfect Number");
    else
        printf("Not a Perfect Number");

    return 0;
}
