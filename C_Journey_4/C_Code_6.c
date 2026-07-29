#include <stdio.h>

int main()
{
    int n;
    printf("Enter the step:");
    scanf("%d", &n);

    int x = 0, y = 0;
    int dir = 0; // 0=Right, 1=Up, 2=Left, 3=Down

    for (int i = 1; i <= n; i++)
    {
        int dist = i * 10;

        if (dir == 0)
            x += dist;
        else if (dir == 1)
            y += dist;
        else if (dir == 2)
            x -= dist;
        else
            y -= dist;

        dir = (dir + 1) % 4;
    }

    printf("%d %d", x, y);

    return 0;
}
