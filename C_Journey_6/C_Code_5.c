#include <stdio.h>
int main()
{
    int a[100], n;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
    scanf("%d", &a[i]);
    printf("Duplicate elements:\n");
    for(int i = 0; i < n; i++)
    {
        int count = 1;

        for(int j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
                count++;
        }
        if(count > 1)
            printf("%d = %d times\n", a[i], count);
    }
    return 0;
}
