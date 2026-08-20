#include <stdio.h>

int main()
{
    int a[50], b[50], n1, n2, i, j, temp;

    scanf("%d", &n1);
    for(i = 0; i < n1; i++)
        scanf("%d", a + i);

    scanf("%d", &n2);
    for(i = 0; i < n2; i++)
        scanf("%d", b + i);

    for(i = 0; i < n1; i++)
    {
        if(*(a + i) > *b)
        {
            temp = *(a + i);
            *(a + i) = *b;
            *b = temp;

            for(j = 0; j < n2 - 1; j++)
                if(*(b + j) > *(b + j + 1))
                {
                    temp = *(b + j);
                    *(b + j) = *(b + j + 1);
                    *(b + j + 1) = temp;
                }
        }
    }

    for(i = 0; i < n1; i++)
        printf("%d ", *(a + i));

    for(i = 0; i < n2; i++)
        printf("%d ", *(b + i));

    return 0;
}
