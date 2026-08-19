#include <stdio.h>

int main()
{
    int n, a[100], i, j, count;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = 0; j < n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
            }
        }

        if(count == 1)
        {
            printf("First non-repeating element = %d", a[i]);
            return 0;
        }
    }

    printf("No non-repeating element");

    return 0;
}
