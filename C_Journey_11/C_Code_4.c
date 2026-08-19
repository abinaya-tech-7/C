#include <stdio.h>

int main()
{
    int n, temp, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp > 0)
    {
        sum = sum + (temp % 10);
        temp = temp / 10;
    }

    if(n % sum == 0)
        printf("Good number");
    else
        printf("Bad number");

    return 0;
}
