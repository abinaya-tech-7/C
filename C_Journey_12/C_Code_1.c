#include <stdio.h>

int add(int a, int b);

int main()
{
    int x, y, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    sum = add(x, y);

    printf("Sum = %d", sum);

    return 0;
}

int add(int a, int b)
{
    return a + b;
}
