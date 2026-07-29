#include <stdio.h>

int main() {
    int m, n;
    printf("Enter first number:");
     scanf("%d",&m);

    printf("Enter first number:");
    scanf("%d",&n);

    int width = 0, temp = n;

    while (temp > 0) {
        width++;
        temp /= 10;
    }

    for (int i = m; i <= n; i++) {
        printf("%0*d", width, i);

        if (i != n)
            printf(" ");
    }

    return 0;
}
