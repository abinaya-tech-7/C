#include <stdio.h>

int main() {
    int x, n;
    scanf("%d %d", &x, &n);

    double sum = 1.0;

    for (int i = 2; i <= n; i += 2) {
        double fact = 1, power = 1;

        for (int j = 1; j <= i; j++) {
            fact *= j;
            power *= x;
        }

        if ((i / 2) % 2 == 1)
            sum -= power / fact;
        else
            sum += power / fact;
    }

    printf("%.4lf", sum);

    return 0;
}
