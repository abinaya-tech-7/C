#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int fib[n];
    if (n >= 1)
        fib[0] = 0;
    if (n >= 2)
        fib[1] = 1;
    for (i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }
    return 0;
}
