#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    long long term = 0, sum = 0;

    for (i = 1; i <= n; i++) {
        term = term * 10 + 9;
        sum += term;
    }

    printf("%lld", sum);

    return 0;
}
