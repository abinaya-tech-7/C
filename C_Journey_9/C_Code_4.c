#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("Initial pointer:\n");
    printf("Value = %d\n", *ptr);

    ptr++;
    printf("\nAfter ptr++:\n");
    printf("Value = %d\n", *ptr);

    ptr++;
    printf("\nAfter another ptr++:\n");
    printf("Value = %d\n", *ptr);

    ptr--;
    printf("\nAfter ptr--:\n");
    printf("Value = %d\n", *ptr);

    return 0;
}
