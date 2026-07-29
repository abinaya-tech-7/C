#include <stdio.h>

int main() {
    int start, end;
    scanf("%d %d", &start, &end);

    for (int n = start; n <= end; n++) {
        int prime = 1;

        if (n <= 1)
            prime = 0;

        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                prime = 0;
                break;
            }
        }

        if (prime)
            printf("%d ", n);
    }

    return 0;
}
