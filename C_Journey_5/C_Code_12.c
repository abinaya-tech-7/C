#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    float sum = 1.0;

    for (int i = 2; i <= n; i++)
        sum += 1.0 / (i * i);

    printf("%.4f", sum);

    return 0;
}
