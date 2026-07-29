#include <stdio.h>

int main() {
    int x, n;
    scanf("%d %d", &x, &n);

    int term = 1;
    int sum = 1;

    for (int i = 1; i <= n; i++) {
        term *= x;
        sum += term;
    }

    printf("%d", sum);

    return 0;
}
