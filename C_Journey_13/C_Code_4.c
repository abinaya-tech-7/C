#include <stdio.h>
int* sortArray(int *arr, int size); // Function declaration
int main()
{
    int a[] = {45, 12, 78, 23, 10};
    int size = sizeof(a) / sizeof(a[0]);
    int *result;
    int i;
    result = sortArray(a, size);     // Function call
    printf("Sorted Array: ");
    for(i = 0; i < size; i++)
   {
        printf("%d ", result[i]);
    }
    return 0;
}
int* sortArray(int *arr, int size) // Function definition
{
    int i, j, temp;
    for(i = 0; i < size - 1; i++) {
        for(j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return arr;
}
