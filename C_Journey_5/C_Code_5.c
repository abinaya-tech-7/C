#include <stdio.h>

int main() {
    int n, i, sum = 0;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d ", i * i);
        sum += i * i;
    }

    printf("\n%d", sum);

    return 0;
}
