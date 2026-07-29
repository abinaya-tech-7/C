#include <stdio.h>
#include <math.h>

int main() {
    int start, end;
    scanf("%d %d", &start, &end);

    for (int n = start; n <= end; n++) {
        int temp = n, digits = 0;

        while (temp) {
            digits++;
            temp /= 10;
        }

        temp = n;
        int sum = 0;

        while (temp) {
            int rem = temp % 10;
            sum += pow(rem, digits);
            temp /= 10;
        }

        if (sum == n)
            printf("%d ", n);
    }

    return 0;
}
