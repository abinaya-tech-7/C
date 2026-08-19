#include <stdio.h>
void display(int *arr, int size);
int main()
{
    int a[] = {10, 20, 30, 40, 50};
    display(a, 5);
    return 0;
}
void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}
