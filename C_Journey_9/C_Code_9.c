#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j;
    int x, y, z, det;

    printf("Enter 3x3 matrix:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    x = a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1]);
    y = a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0]);
    z = a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);

    det = x - y + z;

    printf("Determinant = %d", det);

    return 0;
}
/*a = | a00 a01 a02 |
    | a10 a11 a12 |
    | a20 a21 a22 |*/
