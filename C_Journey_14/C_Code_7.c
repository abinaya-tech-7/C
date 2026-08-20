#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100], n, i, j, temp;
    int *p;
    int left, right, minsum;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    p = a;

    // Sort the array
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(*(p + i) > *(p + j))
            {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }

    left = 0;
    right = n - 1;
    minsum = abs(*(p + left) + *(p + right));

    while(left < right)
    {
        int sum = *(p + left) + *(p + right);

        if(abs(sum) < minsum)
        {
            minsum = abs(sum);
        }

        if(sum < 0)
            left++;
        else
            right--;
    }

    printf("Closest sum = %d", minsum);

    return 0;
}
