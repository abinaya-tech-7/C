#include <stdio.h>

int check(int n)
{
    if (n > 0)
        return 1;
    else
        return 0;
}

void prime(int n)
{
    int i, flag = 1;

    if (n < 2)
        flag = 0;

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("%d is a prime number", n);
    else
        printf("%d is not a prime number", n);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (check(n) == 0)
    {
        printf("Please enter the positive number");
    }
    else
    {
        prime(n);
    }

    return 0;
}
