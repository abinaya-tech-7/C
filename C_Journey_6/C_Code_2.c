#include <stdio.h>
int main() {
    int a[100], n, i, small, second;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    small = second = 9999;
    for (i = 0; i < n; i++) {
        if (a[i] < small) {
            second = small;
            small = a[i];
        } else if (a[i] < second && a[i] != small) {
            second = a[i];
        }
    }
    printf("Second smallest number = %d", second);
    return 0;
}
