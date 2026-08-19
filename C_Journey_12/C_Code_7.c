#include <stdio.h>

void binary(int n)
{
    if(n > 1)
    {
        binary(n / 2);
    }

    printf("%d", n % 2);
}

int main()
{
    int num;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Binary number = ");
    binary(num);

    return 0;
}
