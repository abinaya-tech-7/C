#include <stdio.h>

int main() {
    int n, len;
     printf("Enter first number:");
     scanf("%d",&n);

    printf("Enter first number:");
    scanf("%d",&len);


    int total = n;
    int current = n;

    for (int i = 2; i <= len; i++) {
        current = total - 1;
        total += current;
    }

    printf("%d", total);

    return 0;
}
