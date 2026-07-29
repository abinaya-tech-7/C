#include <stdio.h>

int main() {
    int n, term = 1;
    scanf("%d", &n);

    if (n % 2 == 1) {
        for (int i = 1; i <= (n - 1) / 2; i++)
            term *= 2;
    } else {
        for (int i = 1; i <= (n / 2) - 1; i++)
            term *= 3;
    }

    printf("%d", term);

    return 0;
}
