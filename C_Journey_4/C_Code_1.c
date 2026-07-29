#include <stdio.h>

int main() {
    int n, octal[20], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    while (n > 0) {
        octal[i] = n % 8;
        n = n / 8;
        i++;
    }

    printf("Octal number: ");

    for (i = i - 1; i >= 0; i--) {
        printf("%d", octal[i]);
    }

    return 0;
}
