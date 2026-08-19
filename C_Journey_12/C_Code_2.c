#include <stdio.h>

int square();

int main()
{
    int result;

    result = square();

    printf("Square = %d", result);

    return 0;
}

int square()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    return n * n;
}
