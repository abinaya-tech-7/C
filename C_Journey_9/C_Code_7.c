#include <stdio.h>

int main() {
    int a = 10;
    int *ptr = &a;

    printf("Before increment: %d\n", *ptr);

    (*ptr)++;
    printf("After increment: %d\n", *ptr);

    (*ptr)--;
    printf("After decrement: %d\n", *ptr);

    return 0;
}
