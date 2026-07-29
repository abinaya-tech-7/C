#include <stdio.h>

int main() {
    int a[100], n, i, temp, ch;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("1. Left Rotation\n2. Right Rotation\nEnter choice: ");
    scanf("%d", &ch);

    if (ch == 1) {
        temp = a[0];
        for (i = 0; i < n - 1; i++)
            a[i] = a[i + 1];
        a[n - 1] = temp;
    } else if (ch == 2) {
        temp = a[n - 1];
        for (i = n - 1; i > 0; i--)
            a[i] = a[i - 1];
        a[0] = temp;
    } else {
        printf("Invalid choice");
        return 0;
    }

    printf("Array after rotation: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
