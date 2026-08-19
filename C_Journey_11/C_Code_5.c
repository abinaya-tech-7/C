#include <stdio.h>

int main()
{
    int t, v, w;
    int two, four;

    printf("Enter number of test cases: ");
    scanf("%d", &t);

    while(t--)
    {
        printf("Enter total vehicles: ");
        scanf("%d", &v);

        printf("Enter total wheels: ");
        scanf("%d", &w);

        if(w % 2 != 0 || w < 2 * v || w > 4 * v)
        {
            printf("-1\n");
        }
        else
        {
            four = (w - 2 * v) / 2;
            two = v - four;
            printf("%d %d\n", two, four);
        }
    }

    return 0;
}
