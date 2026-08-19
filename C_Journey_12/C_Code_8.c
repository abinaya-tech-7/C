#include <stdio.h>

int arm(int n)
{
    int r, sum = 0, temp;

    temp = n;

    while(temp != 0)
    {
        r = temp % 10;
        sum = sum + r * r * r;
        temp = temp / 10;
    }

    return sum;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(arm(n) == n)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}
