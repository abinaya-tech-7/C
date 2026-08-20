#include <stdio.h>

int main()
{
    int n, k, j, m, p;
    int bananaMonkeys, peanutMonkeys;
    int total, remaining;

    printf("Enter total number of monkeys: ");
    scanf("%d", &n);

    printf("Enter bananas eaten by one monkey: ");
    scanf("%d", &k);

    printf("Enter peanuts eaten by one monkey: ");
    scanf("%d", &j);

    printf("Enter total number of bananas: ");
    scanf("%d", &m);

    printf("Enter total number of peanuts: ");
    scanf("%d", &p);

    if(n <= 0 || k <= 0 || j <= 0 || m < 0 || p < 0)
    {
        printf("INVALID INPUT");
        return 0;
    }

    bananaMonkeys = m / k;
    peanutMonkeys = p / j;

    total = bananaMonkeys + peanutMonkeys;

    if(total > n)
        total = n;

    remaining = n - total;

    printf("Number of Monkeys left on the Tree:%d", remaining);

    return 0;
}
